#include<iostream>
using namespace std;

int main(){

    int ex,bs,num=1,i;

    cout<<"To display the power of an input number:\n";

    cout<<"Input the base:"<<endl;
    cin>>bs;

    cout<<"Input the exponent:"<<endl;
    cin>>ex;

    for(i=1;i<=ex;i++){

        num=num*bs;
    }
    cout<<bs<<" ^ "<<ex<<" ="<<num<<endl;


    return 0;
}