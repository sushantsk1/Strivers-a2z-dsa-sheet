#include <iostream>
using namespace std;
int main(){
    int i;
    int num;
    cout<<"enter last number: "<<endl;
    cin>>num;
    for ( i = 1; i < num; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    
}