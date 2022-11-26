#include <iostream>
#include <string>
using namespace std;
int main ()
{
string firstname , lastname;
string wholename;
string greeting="Hello";
cout<<"\n Enter your firstname:";
cin>>firstname;
cout<<"\n Enter your last name:";
cin>>lastname;
wholename=firstname+"    "+lastname;
cout<<greeting<<wholename<<"!"<<endl;
cout<<"you have"<<(wholename.length()-1)<<"letters in your name &family"<<endl;
cout<<"I love you"<<(firstname.at(0))<<"."<<(lastname.at(0))<<".";
return 0;
}
