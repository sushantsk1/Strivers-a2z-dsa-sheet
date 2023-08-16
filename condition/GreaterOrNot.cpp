#include<iostream>
using namespace std;

void compareIfElse(int a, int b) {
    if (a > b) {
        cout << "greater";
    } else if (a < b) {
        cout << "smaller";
    } else if (a == b) {
        cout << "equal";
    }
}
    int main(){
int a,b;
cin>>a>>b;
        compareIfElse(a,b);
}