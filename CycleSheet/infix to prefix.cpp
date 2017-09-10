#include<iostream>
#include<cmath>
#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
struct st
{
    int a[50];
    int top;
}stk;
struct st2
{
    char a[50];
    int top;
}stk2;

void init2()        
{
    stk2.top=-1;
}
void init()       
{
    stk.top=-1;
}
void push(int no)
{
    stk.top++;
    stk.a[stk.top]=no;
}
void push(char ch)              
{
    stk2.top++;
    stk2.a[stk2.top]=ch;
}
int pop()
{
    if(stk.top!=-1){
    int ele=stk.a[stk.top];
    stk.top--;
    return(ele);
    }
    else
        return(-1);
}
char pop2()
{
    if(stk2.top!=-1){
    char ele=stk2.a[stk2.top];
    stk2.top--;
    return(ele);
    }
    else
        return('0');
}
int pr(char ch)
{
    if(ch=='#')
        return(0);
     if(ch=='(')
        return(1);
    if(ch=='-'||ch=='+')
        return(2);
    if(ch=='*'||ch=='/')
        return(3);
}
int pr2(char ch)
{
    if(ch=='#')
        return(0);
     if(ch==')')
        return(1);
    if(ch=='-'||ch=='+')
        return(2);
    if(ch=='*'||ch=='/')
        return(3);
}
void disp()
{

    for(int i=0;i<=stk.top;i++)
        cout<<stk.a[i]<<" ";
}
int eval(int n2,int n1,char o)
{
    if(o=='*')
        return(n1*n2);
    if(o=='+')
        return(n1+n2);
    if(o=='-')
        return(n1-n2);
    if(o=='/')
        return(n1/n2);

}
void evaluate(char pf[],int ch)
{
   if(ch==2)
        std::reverse(pf,pf+strlen(pf));
    init();
    init2();
    int no,n2,n1;
    int l=strlen(pf);
	for(int i=0;i<l;i++)
    {
        if(isdigit(pf[i])){
            push(pf[i]-48);}
        else if(isalpha(pf[i]))
        {
            cin>>no;
            push(no);
          
        }
        else
        {
            n2=pop();
            n1=pop();
            if(ch==1)
            push(eval(n2,n1,pf[i]));
            else
                push(eval(n1,n2,pf[i]));

        }
    }
    disp();
}


void  convert_in_po()
{
int no,n2,n1,k=0;
   init2();

	char pstfx[50];
	char inf[50];
	cin>>inf;
	int l=strlen(inf);
	push('#');
	for(int i=0;i<l;i++)
    {
        char chr=inf[i];
        if(chr=='(')
            push(chr);
        else if(isalnum(chr)){
            pstfx[k++]=chr;
        }
        else if(chr==')')
        {
            while(stk2.a[stk2.top]!='(')
                pstfx[k++]=pop2();
           pop2();
        }
        else
        {
            while(pr(stk2.a[stk2.top])>=pr(chr))
                 pstfx[k++]=pop();
            push(chr);
        }
    }
    while(stk2.top)
        pstfx[k++]=pop2();
    pstfx[k]='\0';
    cout<<"the postfix expression is "<<endl;
    cout<<pstfx<<endl;
    cout<<"want to evaluate the obtained expression? (y/n)"<<endl;
    char ech;
    cin>>ech;
    if(ech=='y')
        evaluate(pstfx,1);
}

void  convert_in_pre()
{
int no,n2,n1,k=0;
   init2();

	char pstfx[50];
	char inf[50];
	cin>>inf;
	std::reverse(inf,inf+strlen(inf));

	int l=strlen(inf);
	push('#');
	for(int i=0;i<l;i++)
    {
        char chr=inf[i];
        if(chr==')')
            push(chr);
        else if(isalnum(chr)){
            pstfx[k++]=chr;
        }
        else if(chr=='(')
        {
            while(stk2.a[stk2.top]!=')')
                pstfx[k++]=pop2();
           pop2();
        }
        else
        {
            while(pr2(stk2.a[stk2.top])>=pr2(chr))
                 pstfx[k++]=pop();
            push(chr);
        }
    }
    while(stk2.top)
        pstfx[k++]=pop2();
    cout<<"the prefix expression is "<<endl;
    pstfx[k]='\0';
    std::reverse(pstfx,pstfx+strlen(pstfx));
    pstfx[k]='\0';
    cout<<pstfx<<endl;
    cout<<"want to evaluate the obtained expression? (y/n)"<<endl;
    char ech;
    cin>>ech;
    if(ech=='y')
        evaluate(pstfx,2);
}
int main()
{
	int ch;
	cout<<"enter 1 for postfix  evaluation, enter 2 for prefix evaluation"<<endl;
	cout<<"enter 3 for postfix  conversion, enter 4 for prefix conversion"<<endl;

	cin>>ch;
	if(ch==1||ch==2){
            cout<<"enter the expression"<<endl;
	init();
	char pf[50];
	cin>>pf;
	evaluate(pf,ch);
	}
	else if(ch==3)
	{
	    cout<<"infix to postfix conversion"<<endl;
	    convert_in_po();
    }
    else if(ch==4)
	{
	    cout<<"infix to prefix conversion"<<endl;
	    convert_in_pre();
    }
    main();
   	return(0);
}
