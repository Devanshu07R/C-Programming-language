/*Write a program enter any number then check its even no. or not using if else statement*/

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter any number:";
    cin>>n;

    if(n%2==0)
    {
        cout<<"Even number.";
    }
    else{
        cout<<"Odd number.";
    }
    return 0;
}