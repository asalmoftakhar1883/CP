#include <iostream>

using namespace std;

int main() {
	int n, i,sum;
	cout<<"Please enter a number: ";
	cin>>n;
	
	sum=0;
	i=1;
	 while(i<n){
	 	if(n%i==0){
	 		sum=sum+i;
		 }
		 i++;
	 }
	
	cout<<"total: "<<sum;
}
