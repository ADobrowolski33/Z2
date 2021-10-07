#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
	string x;
	int i;
	fstream plik;
	ofstream MyFile("wynik.txt");
	plik.open("hasla.txt", ios::in);
	while(!plik.eof()){ 
		plik >> x;
		if(x.length()>=8){
			for(i=0;i<x.length();i++){
				if(x[i]=='#'){
					MyFile<<x<<endl;
				}
				if(x[i]=='$'){
					MyFile<<x<<endl;
				}
				if(x[i]=='*'){
					MyFile<<x<<endl;
				}
			}
		}
	}
}

