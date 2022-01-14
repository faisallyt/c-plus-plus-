#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return 0;
            break;
        }
        
    }
    return 1;
    
}
int main(){
    int num;
    cin>>num;
    if(isPrime(num)){
        cout<<"it is a prime Number";

    }
    else{
        cout<<"it is not a prime number";
    }
}