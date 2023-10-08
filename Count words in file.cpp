//Count the number of words contain in the file.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ifstream opfile("code.txt");
	if(opfile.is_open()){
		string line;
		int wordcount=0;
		while(getline(opfile,line)){
			for(int i=0;i<line.length();i++){
				if(line[i]==' '){
					wordcount++;
				}
			}
			wordcount=wordcount+1;
		}
		opfile.close();
		cout<<"Number of words: "<<wordcount<<endl;
	}else{
		cout<<"File cant be opened"<<endl;
	}
}
