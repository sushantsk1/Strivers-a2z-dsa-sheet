
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:"<<endl;
    cin>>n;

    int temp=n;
    int sum=0;

    while(n>0){
        int digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }
    if (sum==temp){
        cout<<"armstrong number..";
    }
    else{
        cout<<"non-armstrong number";
    }

}