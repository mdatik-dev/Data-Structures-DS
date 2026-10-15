#include<stdio.h>
#include<string.h>
#include<ctype.h>

int s[100];
int top = -1;
int pop_number;

void push(int element)
{
    if(top==99)
        printf("Stack OverFlow\n");
    else
    {
        top++;
        s[top]=element;
    }
}

int pop()
{
    if(top == -1)
        printf("Stack UnderFlow\n");
    else
    {
        pop_number=s[top];
        top--;
    }
    return pop_number;
}

void display()
{
    int i;
    printf("\nStack Element is = ");
    for(i=0;i<=top;i++)
        printf(" | %d ",s[i]);
        printf("\n");
}

int main()
{
    char postfix[100],element;
    float num1,num2,result;
    printf("Enter The PostFix Expression = ");
    scanf("%s",postfix);
    printf("\nThe PostFix Expression = %s\n",postfix);
    int i=0;
    while(postfix[i] != NULL)
    {
        element = postfix[i];
        if(isdigit(element))
        {
            push(element-'0');
        }
        else
        {
            num1=pop();
            num2=pop();

            switch(element)
            {
            case '/':
                result = num2/num1;
                break;
            case '*':
                result = num2*num1;
                break;
            case '+':
                result = num2+num1;
                break;
            case '-':
                result = num2-num1;
                break;
            }
            push(result);
        }
        display();
        i++;
    }
    printf("\nFinal result of a PostFix Expression = %d\n", pop());
    return 0;
}

