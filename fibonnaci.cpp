#include<iostream>
using namespace std;
int fib(int n){
    int a=0;
    int b=1;
    for(int i=1;i<=10;i++){
        a=b;
        b=a+b;
        cout<<a,b;
        if (i==n){
            return a;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int ans=fib(n);
    cout<<fib(n)<<ans<<endl;;
}