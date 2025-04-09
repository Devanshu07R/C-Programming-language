#include<iostream>
using namespace std;

int main(){
    int n,i,a=0,b=1,c=2,d;

cout<<"Enter any number:";
cin>>n;

for(i=1;i<=n;i++)
{
cout<<a;
d=a+b+c;
a=b;
b=c;
c=d;
}
return 0;
}