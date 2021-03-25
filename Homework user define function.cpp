#include<iostream>
using namespace std;
float calAm(float am,float year);
float money,year,total,total4 = 0;
int main()
{
 cout<<"Khoayai BankInformation System**Interest = 3%**"<<endl;
 for(int i = 1;i<=3;i++)
 {
  cout<<"Input Amount "<<i<<": ";
  cin>>money;
  cout<<"Input Year "<<i<<": ";
  cin>>year;
  cout<<"Total your money "<<i<<": "<<calAm(money,year)<<endl;
  cout<<"*****************************************************"<<endl;
 }

 cout<<"Total 3 People = "<<total<<endl;
 return(0);
}
float calAm(float money,float year)
{
 float totalam = (money*(year*0.03))+money;
 total += totalam;
 return(totalam);
 /*float total1 = year*0.03;
 float total2 = money*total1;
 float total3 = total2+money;
 return(total3);*/
}