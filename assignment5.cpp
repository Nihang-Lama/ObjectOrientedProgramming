#include<iostream>
using namespace std;
double area(double b,double h){
	cout<<"The area of triangle is"<<0.5*(b*h);
}
void area(int l,int w){
	cout<<"The area of rectangle is"<<l*w;
}
double area(double r){
	cout<<"The area of circle is"<<22/7*(r*r);
}
void area(int l){
	cout<<"The area of square is"<<l*l;
}
int main(){
	int choice;
	cout<<"Enter your choice:"<<endl;
	cout<<"'1'for area of triangle:"<<endl;
	cout<<"'2' for area of rectangle:"<<endl;
	cout<<"'3'for area of circle:"<<endl;
	cout<<"'4'for area of square:"<<endl;
	cout<<"'5' for exit:"<<endl;
	cin>>choice;
	
	
	switch(choice){
		case 1:
			area(10.0,20.0);
			break;
		case 2:
			area(10,20);
			break;
		case 3:
			area(10.0);
			break;
		case 4:
			area(20);
			break;
		case 5:
			exit(0);
			break;
		default:
			cout<<"wrong choice";
			
	}	
}
