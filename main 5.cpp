#include <iostream>

using namespace std;

int main() {
	int n,m,o,p;
	
	cout<<"please enter a positive number: ";
	cin>>n;
	
	p=0;
	
	for ( m=2 ; m<=n ; m++ ){
		
		for(o=2 ; o<=(m/2) ; o++){
			
			if(m%o==0){
				o=m;
				break;
				
			}
		}
		if(o!=m){
			p+=m;
		}
		}
		
		p+=2;
		
		cout<< "result: "<<p;
	
}
