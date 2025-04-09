#include<iostream>
using namespace std;

int main(){

    float height;

    cout<<"Enter your height:";
    cin>>height;

    //taking heights condition: dwarf, average, taller, abnormal....

 if (height<150.0)
 cout<<"THe person is dwarf";

 else if((height>=150.0 && height<=165.0 ))
 cout<<"The person is average";

else if((height>=165.0 && height<=195.0))
cout<<"The person is Taller";

else
cout<<"The person is abnormal";

return 0;

}