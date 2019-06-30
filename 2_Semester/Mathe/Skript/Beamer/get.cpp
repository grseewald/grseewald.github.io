#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<16;i++){
		string str ="wget get https://ifm.mathematik.uni-wuerzburg.de/~dobro/inf2/f";
		str = str + to_string(i);
		str = str + ".pdf";
		cout << "Downloading " << str<<endl;
		const char *command = str.c_str();
		system(command);
	}
}
