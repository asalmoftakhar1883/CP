#include <iostream>

using namespace std;

int main() {
	int n,m,c,BMM;
	
	 cout<<"Please enter a number: ";
	 
	cin>>n;
	
	cout<<"Please enter another number: ";
	
	cin>>m;
	
	c=1;
	
	while (c<=n){
		
		while (c<=m){
			c++;
			
			if (n%c==0 && m%c==0){
				
				BMM=c;
			}
		}
	}
	cout <<"BMM between : "<<n<<" "<<"and"<<" "<<m<<" "<<"is"<<" "<<BMM;
}
