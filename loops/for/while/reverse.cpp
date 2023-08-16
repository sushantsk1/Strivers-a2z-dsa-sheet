#include <iostream>
using namespace std;
int main(){

    int num;
    cout<<"enter number: "<<endl;
cin>>num;

int reverse=0;
int lastdigit;
int i;

while (num>0)
{
    lastdigit=num%10;
    reverse=reverse*10+lastdigit;
    num=num/10;
}

cout<<reverse<<endl;




}