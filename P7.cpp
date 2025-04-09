/*Q4Write a program to enter any year then check its leap year or not using if else statement*/
#include<iostream>
using namespace std;
int main(){

    int year;

    cout<<"Enter any Year:";
    cin>>year;

    if(year%4==0)
    {
        cout<<"Leap Year.";
    }

    return 0;
}