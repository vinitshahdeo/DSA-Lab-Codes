#include<iostream>
using namespace std;
void vol(int d)
{
cout<<4/3*3.14*d*d;
}
void vol(double a)
{
cout<<4/3*3.14*a*a;
}
void vol(float b)
{
cout<<4/3*3.14*b*b;
}
void vol(char c)
{
cout<<"not possible";
}
int main()
{
int d=5;
double a=3;
float b=3.4;
char c='d';

vol(d);
cout<<endl;
vol(a);
cout<<endl;
vol(b);
cout<<endl;
vol(c);
cout<<endl;

}
