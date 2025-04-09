#include<iostream>
using namespace std;
int main(){

    char c;

    cout<<"Input a character:";
    cin>>c;

    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        cout<<"It's a Vowel";
    }
    else{
        cout<<"Consonent";
    }

    return 0;


}