/*Q11 Multiplication table*/
#include<iostream>
using namespace std;
int main(){
    
    int n,i;
    cout<<"Enter any nunber:";
    cin>>n;
    cout<<"\n";

    for(i=1;i<=10;i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }

    return 0;
}