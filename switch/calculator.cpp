// int his calculator 
// first we have created the function cal which we can use later after
// that we have created main function in which weve use do while loop

  #include <iostream>
using namespace std;
int cal(){
    int num1;
    int num2;
    int num;
    int i;
    cout<<"welcome to calculator"<<endl;
    cout<<"enter numbers"<<endl;
    cout<<"enter number :"<<endl;
    cin>>num1;
    cout<<"enter number :"<<endl;
    cin>>num2;
    cout<<"operations: "<<endl;
    cout<<"1. +"<<endl;
    cout<<"2. -"<<endl;
    cout<<"3. *"<<endl;
    cout<<"4. /"<<endl;
    cout<<"enter your operation"<<endl;
    cin>>num;

    switch (num)
    {
    case 1:
       cout<<"ans: "<<num1+num2<<endl;
        break;
    case 2:
       cout<<"ans: "<<num1-num2<<endl;
        break;
        case 3:
       cout<<"ans: "<<num1*num2<<endl;
        break;
        case 4:
       cout<<"ans: "<<num1/num2<<endl;
        break;
    default:
        break;
    }
}

int main(){
char yn;

//her ei am using doo while because i want calculator to print atleast once
    do
    {
        cal();
        cout<<"want ot continue: (y/n)"<<endl;
        cin>>yn;
}while(yn=='y');
cout<<"termnated:"<<endl;
return 0;
}