#include<iostream>
using namespace std;

int main(){

    int sideA,sideB,sideC;

    cout<<"Enter value of side A:";
    cin>>sideA;

    cout<<"Enter value of side B:";
    cin>>sideB;

    cout<<"Enter value of side c:";
    cin>>sideC;
    //equalaterial triangle: all sides equal;
    //Isosceles tiangle: 2 sides equal.
    //scalene triangle: No sides equal.

if(sideA==sideB && sideB==sideC)
{
    cout<<"equalaterial triangle";
}
else if(sideA==sideB||sideB==sideC||sideA==sideC)
cout<<"isosceles triangle";

else
cout<<"Scalene triangle";

return 0;

}