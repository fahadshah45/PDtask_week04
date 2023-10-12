# include <iostream>
void result(int position1, int position2);
using namespace std;
main ()
{
int position1;
int position2;

cout<<"Enter your position: ";
cin>>position1;
cout<<"Enter your friend's position: ";
cin>>position2;
result (position1,position2);
}
void result(int position1, int position2)
{
if (position2-position1>6)
{
cout<<"false";
}
if (position2-position1<=6)
{
cout<<"true";
}
}