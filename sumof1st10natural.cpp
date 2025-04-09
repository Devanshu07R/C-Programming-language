#include<iostream>
using namespace std;

int main(){

    int i,sum;

    cout<<"Input the first 10 Natural no: \n";

    for(i=1;i<=10;i++)
    {
        cout<<i;
        sum=sum+i;
    }
    cout<<"Sum of first 10 Natural are:"<<sum;
return 0;

}