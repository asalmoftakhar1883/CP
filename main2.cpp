#include <iostream>

using namespace std;

 main() {

int x,y,z,S,E,H,P,T;

cout<<"please enter value for x:";

cin>>x;

cout<<"please enter value for y:";

cin>>y;

cout<<"please enter value for z:";

cin>>z;

S = x-y;

E = x+z;

H = S*E;

P =(x+y+z)*(x+y+z);

T = H/(P+1);

cout<<"T: "<<T;

}
