//Library
#include <iostream>
using namespace std;
int main(){
    //enter two angles of a triangle and find the third one 
	int ang1;
	int ang2;
	int sum;
	int ang3;
    //entering values
	ang1=30;
	ang2=60;
	sum= ang1 + ang2;
	ang3= 180 - sum;
    //Displaying values 
	cout<<"first angle = "<<ang1<<endl;
	cout<<"second angle = "<<ang2<<endl;
	cout<<"third angle = "<<ang3<<endl;
return 2;
}
