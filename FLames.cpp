#include<iostream>
#include<string.h>
using namespace std;
struct node
{
    char data;
    struct node *next;
};
struct node* last=NULL;

string a[]={"Friends","Love","Affection","Marriage","Enmity","Sister"};
void create(char b)
{
    struct node *temp;
    temp=new(struct node);
    temp->data=b;
    if(last==NULL)
    {
        temp->next=temp;
        last=temp;
    }
    else
    {
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }
}

void playGamel(int n)
{
	struct node *temp,*q;int i=0;
	q=last->next;
	while(i!=n-1)
        {
            q=q->next;
            i++;
        }
    temp=q->next;
    q->next=temp->next;
    delete(temp);
    q=last->next;
    while(q->next!=last->next)
    {
		for(i=0;i<6;i++)
		{
			if(a[i][0]==q->data){cout<<"Flame result : "<<a[i]<<endl;break;}
		}
		q=q->next;
	}
}
char playGamem(int n)
{
    struct node *temp,*q;
    q=last->next;
    int d=0;
    while(d!=5)
    {
        int i=1;
        while(i!=n-1)
        {
            q=q->next;
            i++;
        }
        temp=q->next;
        q->next=temp->next;
        delete(temp);
        d++;
    }
    return (q->data);
}

char playGameh(int n)
{
	struct node *temp,*q;
    q=last->next;
    int d=0;
    while(d!=5)
    {
        int i=1;
        while(i!=n-1)
        {
            q=q->next;
            i++;
        }
        temp=q->next;
        q->next=temp->next;
        temp->next=last->next;
        last->next=temp;
        last=temp;
        d++;
    }
    return (q->data);
}
int main()
{
    int ch;
    string a[]={"Friends","Love","Affection","Marriage","Enmity","Sister"};
    while(ch!=3)
    {
        cout<<"\n1-PRess 1 to start \n2-Play Game\n3-Exit\nenter your choice : ";
        cin>>ch;
        if(ch==1)
        {
            int i;
            for(i=0;i<6;i++)
            {
                create(a[i][0]);
            }

        }
        else if(ch==2)
        {
            string s1,s2,x,y;
            cout<<"enter name 1 : ";
            cin>>s1;
            cout<<"enter name 2 : ";
            cin>>s2;
            x=s1;y=s2;
            int n1=0,n2=0,n;
            int i,j;
            for(i=0;i<x.size();i++)
            {
                for(j=0;j<y.size();j++)
                {
                    if(x[i]==y[j]){n1++;y[j]='*';break;}
                }
            }
            x=s1;y=s2;
            for(i=0;i<y.size();i++)
            {
                for(j=0;j<x.size();j++)
                {
                    if(y[i]==x[j]){n2++;x[j]='*';break;}
                }
            }
            n=s1.size()-n1+s2.size()-n2;
            cout<<"\n1-LOW LEVEL\n2-MIDDLE LEVEL\n3-HIGH LEVEL\n";
            int k;
            cin>>k;
            cout<<"Number of uncommon letters in two name : "<<n<<endl;
            if(k==1)
            {
				playGamel(n);
			}
			else if(k==2)
			{
				char ans=playGamem(n);
				for(i=0;i<6;i++)
				{
					if(a[i][0]==ans){cout<<"Flame result : "<<a[i];break;}
				}
			}
			else
			{
				char ans=playGameh(n);
				for(i=0;i<6;i++)
				{
					if(a[i][0]==ans){cout<<"Flame result : "<<a[i];break;}
				}
			}
        }
        else
        {
            break;
        }
    }
}
