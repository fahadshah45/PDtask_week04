# include <iostream>
void flowerShop(int redRoses, int whiteRoses, int tulips);
using namespace std;
main ()
{
int redRoses;
int whiteRoses;
int tulips;
cout<<"Red Rose: ";
cin>>redRoses;
cout<<"White Rose: ";
cin>>whiteRoses;
cout<<"Tulips: ";
cin>>tulips;
flowerShop(redRoses,whiteRoses,tulips);
}
void flowerShop(int redRoses, int whiteRoses, int tulips)
{
float redRosesPrice;
float whiteRosesPrice;
float tulipsPrice;
float total;
float discount;
float finalPrice;
redRosesPrice=2.00*redRoses;
whiteRosesPrice=4.10*whiteRoses;
tulipsPrice=2.50*tulips;
total=redRosesPrice+whiteRosesPrice+tulipsPrice;
if(total>200)
{
discount=(total/100)*20;
finalPrice=total-discount;
cout<<"Original Price: $"<<total<<endl;
cout<<"Price after Discount: $"<<finalPrice;
}
if (total<=200)
{
cout<<"Original Price: $"<<total<<endl;
cout<<"No discount applied.";
}


}