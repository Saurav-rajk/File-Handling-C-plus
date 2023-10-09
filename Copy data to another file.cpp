#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ifstream opfile("code.txt");
	ofstream osfile("code_c.txt");
	if(opfile.is_open()&&osfile.is_open()){
		string line;
		while(getline(opfile,line)){
			osfile<<line<<"\n";
		}
		opfile.close();
		osfile.close();
		cout<<"Data has been copied"<<endl;
		
	}else{
		cout<<"Failed to open the file"<<endl;
	}
}
