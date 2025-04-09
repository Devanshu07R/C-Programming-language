#include<iostream>
using namespace std;
int main(){

    int anga,angb,angc,sum;

    cout<<"Enter angle A of a triangle:";
    cin>>anga;

    cout<<"Enter angle B of a triangle:";
    cin>>angb;

    cout<<"Enter angle C of a triangle:";
    cin>>angc;

//the sum of the angle of the triangle is 180 degree...

sum = anga +angb +angc;

if(sum==180)
{
    cout<<"Sum of the Triangle is valid.";
}
else{
    cout<<"Sum of the triangle is not valid.";
}

return 0;
}
