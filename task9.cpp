# include <iostream>
void tpChecker(int people,int tp);
using namespace std;
main ()
{
int people;
int tp;
cout<<"Number of people in the household: ";
cin>>people;
cout<<"Number of rolls of TP: ";
cin>>tp;
tpChecker(people,tp);
}
void tpChecker(int people,int tp)
{
int sheet = tp*500;
int usageperday = 57*people;
int totalusage=usageperday*14;
int availed = sheet/usageperday;
if (sheet>totalusage)
{
cout<<"Your TP will last "<<availed<<" days, no need to panic!";
}
if (sheet<totalusage)
{
cout<<"Your TP will only last "<<availed<<" days, buy more!";
}
}