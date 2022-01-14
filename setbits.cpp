#include<iostream>
using namespace std;
int setA(int a){
    int count=0;
    for(a;a!=0;a=a>>1){
        if(a&1){
            count++;
        }
    }
    return count;
}
int setB(int b){
    int count=0;
    for(b;b!=0;b=b>>1){
        if(b&1){
            count++;
        }
    }
    return count;
}
int main(){
    int num1, num2;
    cin>>num1>>num2;
    int ans1=setA(num1);
    int ans2=setB(num2);
    int answer=ans1+ans2;
    cout<<" answer is "<<answer<<endl;
    return 0;

}