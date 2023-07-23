#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter number: "<<endl;
    cin>>n;
//inversed pyramid
  for ( i = 1; i < n; i++)
  {
    for ( j = i; j<=n; j++)
    {
        cout<<" *";
    }
   cout<<endl; 
  }


  //or this way
 for ( i = n; i>=1; i--)
  {
    for ( j = 1; j<=i; j++)
    {
        cout<<" *";
    }
   cout<<endl; 
  }

}