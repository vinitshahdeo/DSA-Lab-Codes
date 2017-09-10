#include<iostream>
using namespace std;
class person
{
char name[20];
int age;
public:
void getdata()
{
cout<<"Enter name:";
cin>>name;
cout<<"Enter age:";
cin>>age;
}
void display()
{
cout<<name<<endl<<age<<endl;
}
};
class student:public person
{
int Regno;
char course[20];
public:
void get()
{
cout<<"Enter Reg_no:";
cin>>Regno;
getdata();
}
void put()
{
cout<<Regno<<endl;
display();
}
};
class gatescore
{
int gatescore;
public:
void getgate()
{
cout<<"Enter gate_score:";
cin>>gatescore;
}
void putgate()
{
cout<<gatescore<<endl;
}
};
class PGstudent:public student,gatescore
{
char rpaper[20];
public:
void getinfo()
{
cout<<"Enter research paper:";
cin>>rpaper;
get();
getgate();
}
void putinfo()
{
cout<<rpaper<<endl;
put();
putgate();
}
};
int main()
{
PGstudent p1;
p1.getinfo();
p1.putinfo();
return 0;
}




