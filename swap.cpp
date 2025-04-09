#include<iostream>
using namespace std;

int main(){

    int x,y,temp;

    cout<<"Enter value of x: ";
    cin>>x;

    cout<<"Enter value of y: ";
    cin>>y;

     temp=x;
     x=y;
     y=temp;

     cout<<x<<endl;
     cout<<y<<endl;

     return 0;
     


}