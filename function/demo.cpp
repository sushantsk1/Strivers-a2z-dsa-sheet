#include <iostream>
using namespace std;

int add(int a, int b){              //here add is a function which ass two numbers
 cout<<"enter number: "<<endl;
    cin>>a>>b;
    cout<<"addition is: "<<a+b<<endl;
}

int main(){
    add(3,4);
}