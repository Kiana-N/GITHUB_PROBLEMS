#include<iostream>
using namespace std;
int main()
{
const int FIVE_HUNDRED=500;
const int TWO_HUNDRED=200;
const int ONE_HUNDRED=100;
const int FIFTY=50;
const int TWENTY=20;
const int TEN=10;
int money,pay;
cout<<"\n Enter the money amount:";
cin>>money;
//500 Toomans
pay=money/FIVE_HUNDRED;
cout<<"\n pay 500 Toomans:"<<pay;
money=money%FIVE_HUNDRED;
//200 Toomans
pay=money/TWO_HUNDRED;
cout<<"\n pay 200 Toomans:"<<pay;
money=money%TWO_HUNDRED;
//100 Toomans
pay=money/ONE_HUNDRED;
cout<<"\n pay 100 Toomans:"<<pay;
money=money%ONE_HUNDRED;
//50 Toomans
pay=money/FIFTY;
cout<<"\n pay 50 Toomans:"<<pay;
money=money%FIFTY;
//20 Toomans
pay=money/TWENTY;
cout<<"\n pay 20 Toomans:"<<pay;
money=money%TWENTY;
//10 Toomans
pay=money/TEN;
cout<<"\n pay 10 Toomans:"<<pay;
return 0;
}
