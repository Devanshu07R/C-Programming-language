#include<iostream>
using namespace std;

int main(){

    int n,i,j;

    cout<<"Enter any Number:";
    cout<<n;
    cout<<endl;

for(i=1;i<=5;i++)
{
    for(j=1;j<=n;j++)
    {
        cout<<j<<"x"<<i<<"="<<i*j;

    }
}
cout<<endl;

return 0;
 
}