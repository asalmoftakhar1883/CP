#include <iostream>

using namespace std;

 int main(){
	
int s,salary1,salary2,salary3,salary4,salary5,salary6,salary7;

cout<<"Please enter your salary amount for s: ";

cin>>s;

if ( s < 6000000) {
	
	salary1= s - (s * 0/100);
	cout<<salary1;
}

else if ( s >= 6000000 && s < 8000000 ) {
	
	salary2= s - (s * 5/100);
	cout<<salary2;
}

else if ( s >=8000000 && s < 10000000 ) {
	
	 salary3= s - (s * 10/100);
	 cout<<salary3;
}

else if ( s >= 10000000 && s < 14000000 ) {
	
	salary4= s - (s * 15/100);
	cout<<salary4;
}

else if ( s >= 14000000 && s < 18000000 ) {
	
	salary5= s - (s * 20/100);
	cout<<salary5;
}

else if ( s >= 18000000 && s < 25000000 ) {
	
	salary6= s - (s * 25/100);
	cout<<salary6;
}
else {
	
	salary7= s - (s * 35/100);
	cout<<salary7;
}

}
