#include<iostream>
using namespace std;
int Ap(int n){
    int ans=(3*n+7);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<"nth term is "<<Ap(n)<<endl;
}