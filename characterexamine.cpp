#include<iostream>
using namespace std;       


int main(){

    char c;

    cout<<"Input any character:";
    cin>>c;

    if(c>='0'&& c<='100'){

        cout<<"Digit";
    }
    else if(c>='A'&& c<='Z'){

        cout<<"Alphabets";
    }
    else{
        cout<<"Swmbols characters";
    }

    return 0;
}