#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"nhap a: ";

	do{
		cin>>a;
		if(a<=0){
				cout<<"nhap lai so lon hon 0: ";
		}	
	}while(a<=0);
	if(a%2==0)
		cout<<a<<" la so chan";
	else
		cout<<a<<" la so le";
return 0;
}

	
