#include<iostream>
using namespace std;
int factorial(int z){
    int fact=1;
    for(int i=1;i<=z;i++){
        fact=fact*i;
    }
    return fact;
}
int Ncr(int n, int r){
    int num=(factorial(n));
    int den=((factorial(r))*(factorial(n-r)));
    int ans=num/den;
    return ans;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<"factorial of "<<num1<<" and "<<num2<<" is "<<Ncr(num1,num2)<<endl;
}
