//Library
#include <iostream>
using namespace std;
int main(){
    // Entering pricipal value (P),time period(T),rate of interest(R)and     calculate simple interest
	int p;
	int t;
	int r;
	int pro1;
	int inte;
    //entering values
	p=1000;
	t=2;
	r=10;
	pro1= p * t;
	inte= pro1 * r;
    // displaying values
	cout<<"P = "<<p<<endl;
	cout<<"T = "<<t<<endl;
	cout<<"R = "<<r<<endl;
	cout<<"Simple Interest = "<<inte<<endl;
return 76;
}
