#include <iostream>
using namespace std;
void drawcircle();
void drawtriangle();
int main()
{
drawcircle();
drawtriangle();
return 0;
}
void drawcircle()
{
cout<<"\n  *";
cout<<"\n*   *";
cout<<"\n * *";
return;
}
void drawtriangle()
{
cout<<"\n    /  \\";
cout<<"\n   /    \\";
cout<<"\n  /      \\";
cout<<"\n -----------";
return;
}
