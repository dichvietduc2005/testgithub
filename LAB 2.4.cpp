#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double heso,luong;
luong=0;
int TNCT;
do{
	cout<<" TNCT = ";
	cin>>TNCT;
	if(TNCT<=0)
		cout<<"nhap lai";
}while(TNCT<=0);
int luongcb=650000;
if(TNCT<12) heso=1.92;
else if(TNCT >=12 && TNCT<36) heso=2.34;
else if (TNCT>=36 && TNCT<60) heso=3;
else if(TNCT>=60) heso=4.5;

luong=luongcb*heso;
cout<<fixed<<setprecision(2);
cout<<"luong cua nhan vien la: "<<luong;
return 0;
}
