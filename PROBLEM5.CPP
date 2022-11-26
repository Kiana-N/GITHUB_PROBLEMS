#include <iostream>
using namespace std;
const float pI=3.14;
float circumference(float);
float area(float);
int main()
{
float reduis;
cout<<"\n Enter the reduis:";
cin>>reduis;
cout<<"\n the circumference>>:"<<circumference(reduis);
cout<<"\n the area is:"<<area(reduis);
return 0;
}
float circumference (float r)
{ float c=2*pI*r;
return 2*pI*r;  }
float area (float r){
return pI*r*r;
}
