/*Write a program to enter any character then check its vowel or consonent using if else statement*/

#include<iostream>
using namespace std;
int main(){
    
    char c;
    cout<<"Enter any Character:";
    cin>>c;

    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        cout<<"Vowel";
    }
    else{
        cout<<"Consonent";
    }
    return 0;
}