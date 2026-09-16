#include <iostream>
using namespace std ;
int main (){
    int l,b,area,perimeter;
    cout<<"enter length " ;
    cin>>l;
    cout<<"enter breath " ;
    cin>>b;
    area=l*b;
    cout<<"area of rectangle "<<area;
    perimeter = 2*(l+b);
    cout<<"\nperimeter rectangle "<<perimeter;
    return 0;
}