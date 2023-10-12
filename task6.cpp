# include <iostream>
void time (int hrs, int min);
using namespace std;
main ()
{
int min;
int hrs;
cout<<"Enter the number of hours: ";
cin>>hrs;
cout<<"Enter the number of minutes: ";
cin>>min;
time (hrs,min);
}
void time (int hrs, int min)
{
int convertedhrs;
convertedhrs=hrs*60;
if(convertedhrs<min)
{
cout<<min;
}
if (convertedhrs>min)
{
cout<<hrs;
}
}