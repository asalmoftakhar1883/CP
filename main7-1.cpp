#include <iostream>

using namespace std;

int main() {
	int n,m,tavan;
	
	cout<< "please enter a positive number: ";
	cin>>n;
	
	cout<<"please enter another positive number: ";
	cin>>m;
	
	tavan=1;
	 while (n>0){
	 	
	 	tavan=tavan*m;
	 	
	 	n--;
	 }
	 
	 cout<<"Result equal with: "<<tavan;
	 
	 
	 
	 
}
