#include <iostream>   //Q2
using namespace std;

int main(){
	int firstvar, secondvar;
	cout<< "Please give a number as 1st variable:";
	cin>>firstvar;
	cout<<"Please give a number as 2nd variable:";
	cin>>secondvar;

	firstvar=firstvar+secondvar;
	secondvar=firstvar-secondvar;
	firstvar=firstvar-secondvar;

	cout<<"The value of the 1st variable: "<< firstvar<<endl;
	cout<<"The value of the 2nd variable: " <<secondvar<<endl;
	return 0;
}
