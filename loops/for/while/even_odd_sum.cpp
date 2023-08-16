//
// Created by susha on 8/14/2023.
//
#include <iostream>
using  namespace std;

//void evenodd(int n){
//    int last=n%10;
//
//}

int main(){
    int n;
    cin>>n;
int even_sum=0;
int odd_sum=0;
    while(n>0){
        int last=n%10;
        if (last%2==0){
           even_sum=even_sum+last;
           cout<<even_sum;

        }else
        {
            odd_sum=odd_sum+last;
            cout<<last;
        }
n=n/10;
    }
    cout<<"even sum is:"<<even_sum<<" and "<<"odd sum is: "<<odd_sum;

}