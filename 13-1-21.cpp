#include<iostream>
#include<math.h>
using namespace std;
int choice;
int Add(int &a,int &b)
{
 return a+b;
}int Sub(int &a,int &b)
{
 return a-b;
}
int Mul(int &a,int &b)
{
 return a*b;
}int Div(int &a,int &b)
{
 return a/b;
}int pow(int &a,int &b)
{
 return pow(a,b);
}int sqrt(int &a)
{
 return sqrt(a);

}
int main()
{ int a,b,choice;
cout<<"1-Add\n2-Sub\n3-Mul\n4-Div\n5-power\n6-square root\n";
cout<<"Entre the 1st Number=";
cin>>a;
cout<<"Entre the 2nd Number=";
cin>>b;
cout<<"Enter your choice :";
cin>>choice;
cout<<"Your Expected Answer :";
 if(choice==1){
 	int Add();
 }else if(choice==2){
 	int Sub();
}else if(choice==3){
	int Mul();
}else if(choice==4){
	int Div();
}else if(choice==5){
	int pow();
}else if(choice==6){
	int sqrt();
} 
 
}
