#include <iostream>

using namespace std;

int main() {
	
	int a[5];
	int b[5];
	int m,k,j;
	  for (int i=0 ; i<5 ; i++)
	  {
	  	cout<< " Enter a value for first ["<<i<<"]: ";
	  	 cin>> a[i];
	  }
	  
	  for (int i=0 ; i<5 ; i++)
	  {
	  	cout<< "Enter a value for second ["<<i<<"]: ";
	  	cin>> b[i];
	  }
	  for (j=0 ; j<5 ;j++ )
	  {
	  	m=a[j];
	  	
	  	a[j]=b[j];
		  
		b[j]=m;
	  for (int i=0 ; i<5 ; i++)
	  {
	  	
	  	cout<<" array first value is: "<<a[i]<<"\n";
	  	
	  }
	  
	  for ( int i=0 ; i<5 ; i++)
	  {
	  	cout<< " array second value is: "<< b[i]<<"\n";
	  }
	  }
		}
