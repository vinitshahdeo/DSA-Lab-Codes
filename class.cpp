#include<iostream>
using namespace std;
class person
{
int age;
char name[30];
public:
void getdata()
{
cout<<"Enter Your Name";
cin>>name;
cout<<"Enter Your Age";
cin>>age;
}
void display()
{
cout<<name<<endl<<age<<endl;
}
};
class student:public person
{
int rollno;
char program[20];
public:
void get()
{
cout<<"Enter Your Roll No.";
cin>>rollno;
cout<<"Program";
cin>>program;
getdata();
}
void put()
{
cout<<rollno<<endl<<program<<endl;
display();
}
};
class gatescore
{
int gs;
public:
void getscore()
{
cout<<"enter gate score";
cin>>gs;

}
void putscore()
{
cout<<gs;

}
};
class pgstudent:public student,gatescore
{
char research[20];
public:
void getinfo()
{
cout<<"Enter Your research name";
cin>>research;
get();
getscore();

}
void getdata()
{
cout<<research;
put();
putscore();
}
};

int main()
{
pgstudent s;
s.getinfo();
s.getdata();
}
