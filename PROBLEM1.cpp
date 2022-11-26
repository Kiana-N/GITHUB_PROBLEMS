#include <iostream>
using namespace std;
int main()
{
	const int KM_TO_M=1000;
	float km,m;
	cout<<"\n Enter the distance in kilometerrs:";
	cin>>km;
	m=km*KM_TO_M;
	cout<<"\n The result in meter is:"<<m;
	return 0;
}
