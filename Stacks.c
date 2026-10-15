#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
void push(int);
int pop();
void display();

int s[100];
int top = -1;
int ch;

int main()
{
    char postfix[100],ele;
    int i,num1,num2,num3,ans;
    printf(" Enter the PostFix Expression = ");
    scanf("%s",postfix);
    printf("\n Post Fix Expression = %s",postfix);
    i=0;
    while(i<=strlen(postfix)-1)
    {
        ele = postfix[i];
        if(isdigit(ele))
        {
            push(ele-'0');
        }
        else
        {
            num1=pop();
            num2=pop();
            /*switch(ele)
            {
            case '/':
                ans = num2/num1;
                break;
            case '*':
                ans = num2*num1;
                break;
            case '+':
                ans = num2+num1;
                break;
            case '-':
                ans = num2-num1;
                break;
            }*/
            if(ele == '/')
            {
                ans = num2/num1;
                break;
            }
            else if(ele == '*')
            {
                ans = num2*num1;
                break;
            }
            else if(ele == '+')
            {
                ans = num2+num1;
                break;
            }
            else if(ele == '-')
            {
                ans = num2-num1;
                break;
            }
            push(ans);
        }
        display();
        i++;
    }
    printf("\n ans  = %d", pop());
    return 0;
}
void push(int ele)
{
    if(top==99)
        printf("\n Stack is full");
    else
    {
        top++;
        s[top]=ele;
    }
}
int pop()
{
    if(top == -1)
        printf("\n Stack is Empty");
    else
    {
        ch=s[top];
        top--;
    }
    return ch;
}
void display()
{
    int i;
    printf("\nStack Single Element is = ");
    for(i=0;i<=top;i++)
        printf(" | %d ",s[i]);
}
