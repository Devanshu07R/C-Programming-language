#include<iostream>
using namespace std;

int main(){

    int n,first,last,sum;

    cout<<"Display the first and last digit of a number: \n";

    cout<<"Input any number: \n";
    cin>>n;

    first = n;
    last = n%10;

    for( first=n; first>=10; first=first/10 );

cout<<"The first digit of"<< n <<"is: "<<first<<endl;
cout<<"The last digit of"<< n <<"is: "<<last<<endl;

sum=first+last;

cout<<"The sum of first and last digit of a input number is:"<<sum<<endl; 

return 0;

}
