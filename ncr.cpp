#include<iostream>
using namespace std;
int Ncr(int n,int r){
   int upper=1;
   for(int start=1;start<=n;start++){
       upper=upper*start;
   }
   int lower=1;
   for(int start1=1;start1<=r;start1++){
       lower=lower*start1;
   }
   int mul=1;
   for(int mulstart=1;mulstart<=(n-r);mulstart++){
       mul=mul*mulstart;
   }
   int ans;
   ans=upper/(lower*mul);
   return ans;
}
int main(){
    int num1, num2;
    cin>>num1>>num2;
    int answer=Ncr(num1,num2);
    cout<<answer<<endl;
}