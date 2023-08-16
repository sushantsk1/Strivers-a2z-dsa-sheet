#include<iostream>
using namespace std;
int main(){
int a,b,num;
cout<<"enter your numbers: "<<endl;
cin>>a>>b;
for ( int i = a; i <=b; i++)
{
   for ( int j = 2; i <=b; j++)
   {
    if (num%i==0)
    {
       cout<<num;
    }
    
   }
   
}

}