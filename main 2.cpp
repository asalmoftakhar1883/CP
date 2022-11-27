#include <iostream>

using namespace std;

int main() {

	int m,n,d,i,o;
	cout<<"Please enter a positive number: ";
	cin>>m;
	cout<<"Please enter another positive number: ";
	cin>>n;
	
	d=0;
	
	i=0;
	
	while(m-d>=n) {
		
		d=d+n;
		o=m-d;
		i++;
		
	}
		cout<<"maghsoom aleih: "<<i;
		
		cout<<"baghimande: "<<o;
	
	}

