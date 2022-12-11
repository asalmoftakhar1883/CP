#include <iostream>

using namespace std;

const int n=10;

int main() {
	
	int a[n];
	
	 int i, j , s , temp;
	 
	 for (i=0; i<n ; i++)
	 {
	 	
	 	cout << "Please enter key ["<<i<<"]: ";
	 	cin >> a[i];
	 }
	 
	 cout<< "Please enter another key: ";
	 cin >> s;
	 
	 a[10]=s;
	 
	 for (i=0; i<n ; i++)
	 {
	 	for(j=0; j<(n-i); j++)
	 	{
	 		
	 		if (a[j]>a[j+1])
	 		{
	 			
	 			temp=a[j];
	 			a[j]=a[j+1];
	 			a[j+1]=temp;
			 }
		 }
	 }
	 
	 cout<<"Array after sortig: ";
	 
	 for(i=0 ; i<n ; i++)
	 {
	 	cout<<" "<<a[i];
	 }
	
}
