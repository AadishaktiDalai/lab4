//Library
#include <iostream>
using namespace std;
int main(){
    //entering marks of five subjects and calculating total,average and percentage
	double sub1;
	double sub2;
	double sub3;
	double sub4;
	double sub5;
	double total;
	double avg;
	double div;
	double per;
    //entering values
	sub1=80;
	sub2=70;
	sub3=72;
	sub4=93;
	sub5=85;
	total= sub1 + sub2 + sub3 + sub4 + sub5;
	avg= total / 5;
	div= total / 500;
	per= div * 100;
//displaying values
	cout<<"maths = "<<sub1<<endl;
	cout<<"physics = "<<sub2<<endl;
	cout<<"english = "<<sub3<<endl;
	cout<<"chemistry = "<<sub4<<endl;
	cout<<"biology = "<<sub5<<endl;
 	cout<<"total= "<<total<<endl;
	cout<<"average = "<<avg<<endl;
	cout<<"percentage = "<<per<<endl;
return 6;
}
