#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter number: "<<endl;
    cin>>n;
//* pyramid
  for ( i = 1; i < n; i++)
  {
    for ( j = 1; j <=i; j++)
    {
        cout<<i;
    }
   cout<<endl; 
  }

  //another one
  int counter=1;
  for ( i = 1; i < n; i++)
  {
    for ( j = 1; j<=i; j++)
    {
      cout<<counter<<" ";
    counter++;
    }
    cout<<endl;
  }
  
}