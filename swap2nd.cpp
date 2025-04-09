#include<iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    a=a+b;//8+4=12
    b=a-b;//12-8=4, b=4
    a=a-b;//12-4=8

    cout<<a<<endl;
    cout<<b<<endl;

    return 0;

}
    