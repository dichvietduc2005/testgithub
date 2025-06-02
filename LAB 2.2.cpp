#include<iostream>
using namespace std;

int main(){
	int a,b;
	do{
		cout<<"nhap a: "<<"nhap b: ";
		cin>>a>>b ;
		if(a<=0 || b<=0 )
			cout<<"nhap lai: ";	
	}while(a<=0 || b<=0 );
	int max = a;
	if(max<b){
		max=b;}
	cout<<"so lon hon : "<<max;
return 0;			

}
