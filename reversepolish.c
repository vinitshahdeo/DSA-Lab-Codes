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
    case '(':
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


void topostfix()
{
    char infix[100],postfix[100],ch,elem;
    printf("enter infix expression:");
    scanf("%s",infix);
    push('#');
    int i= 0,k=0;
    while((ch=infix[i++])!='\0')
    {

        if(ch=='(')
            push(ch);
        else if(isalnum(ch))
            postfix[k++]=ch;
        else if(ch==')')
        {
            while(s[top]!='(')
                postfix[k++]=pop();
            elem = pop();
        }
        else
        {
            while(pri(s[top])>=pri(ch))
                postfix[k++]=pop();
            push(ch);
        }
    }
    while(s[top]!='#')
        postfix[k++]=pop();
    postfix[k]='\0';
    printf("postfix expression:%s\n\n",postfix);
}

void postfixeval()
{
    char post[50],ch,elem;
    float st[20];
    printf("enter postfix expression:");
    scanf("%s",post);
    int i=0,top=-1,val;
    while((ch=post[i++])!='\0')
    {

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
                    st[top-1]=st[top-1]-st[top];
                    top--;
                    break;
                case '+':
                    st[top-1]=st[top-1]+st[top];
                    top--;
                    break;
                case '*':
                    st[top-1]=st[top-1]*st[top];
                    top--;
                    break;
                case '/':
                    st[top-1]=st[top-1]/st[top];
                    top--;
                    break;
            }
        }
    }
    printf("%.2f\n\n",st[top]);
}

int main()
{
    int ch = 0;
    while(ch!=3)
    {
        printf("Menu \n1.Infix to Postfix \n2.Evaluation of postfix \n3.exit\n\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            topostfix();
            break;
        case 2:
            postfixeval();
            break;
        case 3:
            printf("Thank you");
            break;
        default:
            printf("Wrong choice\n");

        }
    }

}
