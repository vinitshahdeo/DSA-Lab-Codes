#include <stdio.h>
#include <ctype.h>
#include <string.h>
char s[50];
int top = -1 ;
push(char el)
{

    s[++top]=el;
}

char pop()
{
    return s[top--];
}

int pri(char ch)
{
    switch(ch)
    {
    case ')':
        return 1;
    case '-':
    case '+':
        return 2;
    case '*':
    case '/':
        return 3;
    case '^':
        return 4;
    case '#':
        return 0;
    }
}


void toprefix()
{
    char infix[100],prefix[100],ch,elem;
    printf("enter infix expression:");
    scanf("%s",infix);
    push('#');
    int i=strlen(infix)-1,k=0;
    while(i>=0)
    {
        ch=infix[i];
        if(ch==')')
            push(ch);
        else if(isalnum(ch))
            prefix[k++]=ch;
        else if(ch=='(')
        {
            while(s[top]!=')')
                prefix[k++]=pop();
            elem = pop();
        }
        else
        {
            while(pri(s[top])>pri(ch))
                prefix[k++]=pop();
            push(ch);
        }
        i--;
    }
    while(s[top]!='#')
        prefix[k++]=pop();
    prefix[k]='\0';
    char result[100];
    int j=0;
    for(i=strlen(prefix)-1;i>=0;i--)
    {
        result[j++]=prefix[i];
    }
    result[j]='\0';
    printf("prefix expression:%s\n\n",result);
}

void prefixeval()
{
    char pre[50],ch,elem;
    float st[20];
    printf("enter prefix expression:");
    scanf("%s",pre);
    int i=strlen(pre)-1,top=-1,val;
    while(i>=0)
    {
        ch=pre[i];
        if(isalpha(ch))
        {
            printf("enter value for %c :",ch);
            scanf("%d",&val);
            st[++top]=val;
        }
        else
        {
            switch(ch)
            {
                case '-':
                    st[top-1]=st[top]-st[top-1];
                    top--;
                    break;
                case '+':
                    st[top-1]=st[top]+st[top-1];
                    top--;
                    break;
                case '*':
                    st[top-1]=st[top]*st[top-1];
                    top--;
                    break;
                case '/':
                    st[top-1]=st[top]/st[top-1];
                    top--;
                    break;
              
            }
        }
        i--;
    }
    printf("%.2f\n\n",st[top]);
}

int main()
{
    int ch = 0;
    while(ch!=3)
    {
        printf("Menu \n1.Infix to Prefix \n2.Evaluation of prefix \n3.exit\n\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            toprefix();
            break;
        case 2:
            prefixeval();
            break;
        case 3:
            printf("Thank you");
            break;
        default:
            printf("Wrong choice\n");

        }
    }

}
