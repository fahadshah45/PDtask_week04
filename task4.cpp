# include <iostream>
void  speedometer(int speed);
using namespace std;
main ()
{
int speed;
cout<<"speed: ";
cin>>speed;
speedometer (speed);
}
void  speedometer(int speed)
{
if (speed>100)
{
cout<<"Halt... YOU WILL BE CHALLENGED!!!";
}
if (speed<=100)
{
cout<<"Perfect! You're going good.";
}
} 