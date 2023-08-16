//
// Created by susha on 8/16/2023.
//
#include<iostream>
using namespace std;

void inversPyramid1(int n){
    for (int i = n; i >=1 ; i--) {
        for (int j = 1; j<=i ; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void inversPyramid2(int n){
    for (int i = 1; i <=n ; i++) {
        for (int j = 1; j<=n-i+1 ; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    inversPyramid1(n);
    inversPyramid2(n);

}