#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int row=1;
	int loop=n;
	int loop2=3;
	while(row<=n/1.7){
		int space= row-1;
		while(space){
			cout<<" ";
			space--;
		}
		int col1=1;
//		char ch='*';
//		int loop=n;
		while(col1<=loop){
			cout<<"*";
			col1++;
//	
		}
//		int space2
		
		loop=loop-2;
		cout<<endl;
		row++;
	}
	while(row>=n/1.7){
		int space2=n-row;
		while(space2){
			cout<<" ";
			space2--;
		}
		int col2=1;
		while(col2<=loop2){
			cout<<"*";
			col2++;
		}
		loop2=loop2+2;
		cout<<endl;
		row++;
		if(row>n){
			break;
		}
	}
}
