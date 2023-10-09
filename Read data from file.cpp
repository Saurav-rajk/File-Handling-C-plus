//Read data from the file and print it.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ifstream osfile("hello.txt");
	if(osfile.is_open()){
		string line;
		while(getline(osfile,line)){
			cout<<line<<endl;
			
		}
		osfile.close();
	}else{
		cout<<"File cannot be opened"<<endl;
	}
}
