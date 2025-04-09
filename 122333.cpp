#include<iostream>
using namespace std;
int main(){

int i,j;

for(i=1;i<=6;i++)//row
{
    for(j=1;j<=i;j++)//column
    {
        cout<< i;
    }
    cout<<endl;
}
return 0;
}