//
// Created by susha on 8/16/2023.
//
#include<iostream>
using namespace std;

void numberPyramid(int n){
    for (int i = 0; i <n ; i++) {
        for (int j = 1; j <=i ; j++) {
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    numberPyramid(n);
}