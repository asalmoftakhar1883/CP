#include <iostream>

using namespace std;

int main() {
	
        int array_size=10;
     
        int arr[array_size],max,min;
        
        float sum,average;
        
        max=arr[0];
        
            for ( int i=0 ; i<array_size ; i++)
            {
            	
            	cout<<"Enter value for [i] : ";
            	
            	cin >> arr[i];
            	
            	if (arr [i] > max)
            	{
            		
            		max=arr[i];
            		
				}
				min=arr[0];
				
				for (int i=0 ; i<array_size; i++)
				{
					if (arr[i]<min)
					{
						min=arr[i];
						
					}
				}
			}
			
			cout<< "your enter data(s) : ";
			
			for (int i=0 ; i<array_size ; i++)
			{
				cout<<arr[i];
				
				if (i<array_size-1)
				{
					
					cout<<" , ";
					
				}
			}
			
			sum= min+max;
			average=sum/2;
			
		cout<<"\n"<<" maximum value is: "<<max;
		cout<<"\n"<<" minimum value is: "<< min;
		cout<<"\n"<<" average value is: "<< average;
         
}
