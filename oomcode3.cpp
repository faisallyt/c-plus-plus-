#include<iostream>  
#include<bits/stdc++.h>
  #include<string.h>  
using namespace std;
  class strg  
{  
private:  
char str[100];  public:  
void display()  
{ 
cout<<str<<endl;  
}  
void input()  
{  
cin>>str;  
}  
strg toupper()  { char c[100],ch;  strg s1;  int k;  int i=0;  
while(str[i]!='\0')  
{  
ch=str[i];  k=int(ch)-32;  s1.str[i]=char(k);  
i++;  
}  
return s1; 
}  
char *copy(char *dist,char *source)  
{  
while(*source!='\0')  
{  
*dist=*source;  dist++ ;  source++;  
}  
*dist++ ='\0';  
return dist;  
}  
char *cat(char *c,char *src1,char *src2)  
{  
while(*src1!='\0')  
{  
*c++=*src1++;  
}  
*c++=' '; 
while(*src2!=0)  
{  
*c++=*src2++;  
}  
*c++='\0';  return c;  
}  
strg tolower()  { char c[100],ch;  strg s1;  int k;  int i=0;  
while(str[i]!='\0')  
{  
ch=str[i];  k=int(ch)+32;  s1.str[i]=char(k);  i++;  
}  
return s1; 
}  
strg operator== (strg s1)  
{  
strg s3;  copy(s3.str,s1.str);  return s3;  
}  
strg operator+ (strg s1)  
{  
strg s3;  cat(s3.str,str,s1.str);  
return s3;  
}  
strg operator<= (strg s)  { strg s4;  copy(s4.str,str); if(s4.str<=s.str)  
{  
return s4;  
}  
else  
{  
return s;  
}  
}  
int len()  
{  
int i=0;  
while(str[i]!=0)  
{  
i++;  
}  
return i;  
}  }; 
int main()  
{  
strg s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11;  cout<<"enter first string \n";  s1.input();  cout<<"length of string\n"<<s1.len();cout<<endl;  cout<<"enter second string \n";  s2.input();  
cout<<"using + operator overloading \n";  s3=s1+s2;  s3.display();  
cout<<"shortest string between to using operator overloading <="<<"\n";  s4=(s1<=s2);  s4.display();  
cout<<"enter lower case alphabet to change to upper \n";  s5.input();  s6=s5.toupper();  s6.display();  
cout<<"enter upper case alphabet to change to lower \n"; s7.input();  s8=s7.tolower();  s8.display(); cout<<endl; 
cout<<"enter string to copy \n";  s9.input();  s10=(s11==s9);  
cout<<"the copied string is ";  s10.display();  
} 