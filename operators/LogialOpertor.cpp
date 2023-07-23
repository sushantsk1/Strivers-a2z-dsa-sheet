//logical operator are &&,||

#include <iostream>
using namespace std;
int main(){

int height;
cout<<"enter height in cm: "<<endl;
cin>>height;

if(height<=120&&height>=220){
    cout<<"abnormal"<<endl;
}
else
cout<<"normal"<<endl;
}