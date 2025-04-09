#include<iostream>
using namespace std;

int main(){
    int i,j;

    for(i=1;i<=5;i++)//row
    {
        for(j=1;j<=5;j++)//column
        {
            if(i==1||i==5||j==1||j==5)
            cout<<"*";//statement
            else
            cout<<" ";//statement
             }
        cout<<endl;//statement
        }

    return 0;
}