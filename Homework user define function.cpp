#include<iostream>
using namespace std;
float calAm(float am,float year);
float am,year,totalam1,total4 = 0;
int main()
{
 cout<<"Khoayai BankInformation System**Interest = 3%**"<<endl;
 for(int i = 1;i<=3;i++)
 {
  cout<<"Input Amount "<<i<<": ";
  cin>>am;
  cout<<"Input Year "<<i<<": ";
  cin>>year;
  cout<<"Total your money "<<i<<": "<<calAm(am,year)<<endl;
  cout<<"*****************************************************"<<endl;
 }

 cout<<"Total 3 People = "<<totalam1<<endl;
 return(0);
}
float calAm(float am,float year)
{
 float totalam = (am*(year*0.03))+am;
 totalam1 += totalam;
 return(totalam);
 /*float total1 = year*0.03;
 float total2 = am*total1;
 float total3 = total2+am;
 return(total3);*/
}