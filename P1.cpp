/* Q1.Write a program enter any number then check its even no. or not using if statement*/
#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter any Number:";
    cin>>n;

    if(n%2==0)
    {
        cout<<"Even number.";
    }

    return 0;
}
