#include<iostream>
using namespace std;
int main(){
    int num=2;
    switch (num)
    {
    case 1 /* constant-expression */:
        /* code */
        cout<<"first"<<endl;
        break;
    case 2: cout<<"second"<<endl;
        break;
    default:
          cout<<"it is default"<<endl;
        break;
    }
}