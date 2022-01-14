#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    char operation;
    cout<<"enter the operation you want to perform"<<endl;
    cin>>operation;
    switch (operation)
    {
    case 'a'/* constant-expression */:
        /* code */
        cout<<a+b<<endl;
        break;
    case 's': cout<<a-b<<endl;
        break;
    case 'm' : cout<<a*b<<endl;
        break;
    case 'd': cout<<a/b<<endl;
        break;
    
    default:cout<<"nothing"<<endl;
        break;
    }
}