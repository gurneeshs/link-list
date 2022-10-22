#include <stdio.h>
#include <stdlib.h>
//#include <ctype.h>
#include <string.h>

int stack[100],top=-1,i,val,n1,n2,n3,n4,item;

void push(int item)
{
    stack[top+1]=item;
    top=top+1;
}
int pop()
{
    n4=stack[top];
    stack[top]=stack[top+1];
    top=top-1;
    return n4;
}

int main()
{
    
    char ch='a';
    printf("Enter the post fix expression: (Press e to end expression) \n");

    while (ch!='e')
    {
        scanf("%c",&ch);
        if (ch>='0' && ch<='9')
        {
            item=ch-'0';
            push(item);
        }

        else if (ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='(' || ch==')' )
        {
            n2=pop();
            n1=pop();
            switch (ch)
            {
                case '+':
                n3=n1+n2;
                push(n3);
                break;

                case '-':
                n3=n1-n2;
                push(n3);
                break;

                case '*':
                n3=n1*n2;
                push(n3);
                break;

                case '/':
                n3=n1/n2;
                push(n3);
                break;
            }
        }
    }
    printf("%d",n3);   
}