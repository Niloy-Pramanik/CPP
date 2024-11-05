#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    int sum;
    cout<<"Input 2 numbers: ";
    cin>>n1>>n2;

    char op;
    cout<<"Input an operator: ";
    cin>>op;

    switch (op)
    {
    case '+':
    sum=n1+n2;
    cout<<"Add  ition is: "<<sum<<endl;
        break;
    case '-':
    sum=n1-n2;
    cout<<"Subtraction  is: "<<sum<<endl;
        break;

    case '*':
    sum=n1*n2;
    cout<<"Multiplication is: "<<sum<<endl;
        break;

    case '/':
    sum=n1/n2;
    cout<<"Division is: "<<sum<<endl;
        break;


    
    default:
    cout<<"Wrong choice!"<<endl;
        break;
    }
    




}