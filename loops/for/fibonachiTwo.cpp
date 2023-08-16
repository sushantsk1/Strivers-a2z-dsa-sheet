#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0;
    int b=1;
    int add=2;

    int n;  //1 1 2 3 5 8 13 21 34
    cin>>n; //0 1 2 3 4 5 6  7   8
    for(int i=1;i<n;i++){
        add=a+b;
        a=b;
        b=add;
        cout<<add;
    }

}