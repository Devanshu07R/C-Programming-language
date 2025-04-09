#include<iostream>
using namespace std;

int main(){

    int n,t,r,sum;

    cout<<"Display the number in reverse order:\n";
    cout<<"Input a number:\n";
    cin>>n;

    for(t = n; n!= 0; n= n/10)
    {
    r = n % 10;
    sum = sum*10+r;
    }

    cout<<"The number in reverse order is: "<<sum;

    return 0;

}