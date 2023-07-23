#include <iostream>4
using namespace std;
int main(){
    int num,i=1;
    cout<<"enter number"<<endl;
    cin>>num;
   
   do
   { 
    i++;
    cout<<num<<" x "<<i<<" = "<<num*i<<endl;
   } while (i<10);
  
   
}
