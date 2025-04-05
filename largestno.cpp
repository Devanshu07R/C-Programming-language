#include<iostream>
using namespace std;

int main(){

    int n1,n2,n3;

    cout<<"Enter 1st number:";
    cin>>n1;

    cout<<"Enter 2nd number:";
    cin>>n2;

    cout<<"Enter 3rd number:";
    cin>>n3;

    //100,82,53

 if (n1 > n2)   
    {
     if( n1 > n3)  
     {
            cout<<"The 1st Number is the greatest  \n";  
     } 
    else
    {
            cout<<"The 3rd Number is the greatest  \n";   
    }
    }
    else if (n2 > n3)   
        cout<<"The 2nd Number is the greatest  \n";  
    else
        cout<<"The 3rd Number is the greatest  \n"; 

        return 0;
        }