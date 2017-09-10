#include<iostream>
#include<string.h>
#define MAXM 10
#include<cstdlib>
#include<conio.h>
using namespace std;
struct back{
int b[MAXM];
int top;
}bc;
struct front{
int a[MAXM];
int top;
}fp;
void intlz();
int popfr();
void pushfr(int item);
int popbc();
void pushbc(int item);
void displayfr();
bool bcisempty();
int main()
{
 intlz();
 int i,j=0,c=1,choi=0,z,p;
 if(j==0)
 {
     pushfr(c++);
     cout<<"it is first page..."<<endl;
     j=1;
 }
 do
 { 
     cout<<"\n\n:'1' go to back page.\n '2' go to next page.\n '3'.exit."<<endl;
     cin>>choi;
     switch(choi)
     {
        case 2:
        	if(bcisempty())
        	{
        		cout<<"\nwere on page\t"<<fp.a[fp.top];
        		pushfr(c++);
        		cout<<"\tare on page\t"<<fp.a[fp.top];
        	}
        	else
        	{
        		cout<<"\nwere on page\t"<<fp.a[fp.top];
        		int z = popbc();
        		pushfr(z);
        		cout<<"\tare on page\t"<<fp.a[fp.top];
			}
        	break;
        case 1:
        z=popfr();
        pushbc(z);
        cout<<"\nwere on page\t"<<z<<endl;
        cout<<"\tare on page\t"<<fp.a[fp.top];
        break;
        case 3:
        exit(0);
   }

 }while(choi!=4);
 getch();

}
void intlz()
{
    fp.top=-1;
    bc.top=-1;
}
int popfr()
{
   if(fp.top==-1)
   {
       cout<<"\nCannot go back\n";
       return -999;
   }
   int choi=fp.a[fp.top];
   fp.top--;
   return choi;
}
void pushfr(int item)
{
if(fp.top==MAXM-1)
    cout<<"\n cannot go to next page\n";
else
    {
        fp.top++;
        fp.a[fp.top]=item;
    }
}
int popbc()
{
   if(bc.top==-1)
   {
       cout<<"\nCannot go back\n";
       return -999;
   }
   int choi=bc.b[bc.top];
   bc.top--;
   return choi;
}
void pushbc(int item)
{
if(bc.top==MAXM-1)
    cout<<"\n Cannot move any further\n";
else
    {
        bc.top++;
        bc.b[bc.top]=item;
    }
}
void displayfr()
{
    int i;
    for(i=0;i<fp.top;i++)
        cout<<fp.a[i]<<"\t";
}
	void displaybc()
{
    int i;
    for(i=0;i<bc.top;i++)
        cout<<bc.b[i]<<"\t";
}
bool bcisempty()
{
	if(bc.top==-1)
		return 1;
	else
		return 0;
}
