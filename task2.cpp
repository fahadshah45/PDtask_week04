# include <iostream>
# include <string>
void reciprocate (std::string value);
using namespace std;
main ()
{
string value;
cout<<"Enter 'true' or 'false': ";
cin>>value;
reciprocate(value);
}
void reciprocate (std::string value)
{
if (value=="true")
{
cout<<"false";
}
if (value=="false")
{
cout<<"true";
}
}