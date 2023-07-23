//assign operator are =-,+=,*=,/=,

#include <iostream>
using namespace std;
int main(){
    
    int n1,n2;
    cout<<"enter number: "<<endl;
    cin>>n1>>n2;

    n1+=n2;
    cout<<"addition: "<<n1<<endl;

    n1-=n2;
    cout<<"subtraction: "<<n1<<endl;

    n1*=n2;
    cout<<"multipliacation: "<<n1<<endl;

    n1/=n2;
    cout<<"division: "<<n1<<endl;

}