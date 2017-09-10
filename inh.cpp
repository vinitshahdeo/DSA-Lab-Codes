#include<iostream>
using namespace std;
class person
{
protected:
char name[50];
public:
void getdata()
{
cout<<"enter name";
cin>>name;
}
void display()
{
cout<<name<<endl;
}
};
class employee:public person
{
protected:
int eid;
char designation[30];
public:
void getinfo();
void dis();
};
void employee::getinfo()
{
	person::getdata();
	cout<<"enter eid"<<"\n"<<"enter designation";
	cin>>eid>>designation;
}
void employee::dis()
{
	person::display();
	cout<<"eid"<<eid<<endl;
	cout<<"designation"<<designation<<endl;
}
int main()
{
	employee e;
	e.getinfo();
	e.dis();
}
