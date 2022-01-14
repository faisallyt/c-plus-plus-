#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rs"<<endl;
    cin>>n;
    int rs100,rs50,rs20,rs1;
    
    switch(1){
        case 1: rs100=n/100;
        n=n%100;
        cout<<"no of 100 rs notes = "<<rs100<<endl;

        case 2: rs50=n/50;
        n=n%50;
        cout<<"no of 50 rs notes = "<<rs50<<endl;

        case 3: rs20=n/10;
        n=n%20;
        cout<<"no of 20 rs notes = "<<rs20<<endl;
         case 4: rs1=n/1;
         n=n%1;
         cout<<"no of 1 rs coin = "<<rs1<<endl;
    }
    
}