#include<stdio.h>

#define SIZE 5 //macro

void push();
void pop();
void traverse();

int stack[SIZE];
int top=-1;

int main()
{

    push();
    push();
    push();
    traverse();
    pop();
    traverse();

}

void push()
{
 int item;

 if(top>=SIZE)
 {
     printf("\n stack is full");
     exit(0);
 }
    else
    {
        printf("\n enter the element>");
        scanf("%d",&item); //item=5

        top++; //top=0
        stack[top]=item; //
    }

}

void pop()
{
    int item;

    if(top==-1)
    {
        printf("\n stack is empty");
        exit(0);
    }

    else
    {
        item=stack[top];
    top--;

    }
    printf("\n Element deleted is %d",item);
}

void traverse()
{
    int i;

    if(top==-1)
    {
        printf("\n stack is empty");
        exit(0);
    }
    else
        {
            printf("\n STACK is ...\n");
        for(i=top;i>=0;i--)
        {
            printf("\n%d",stack[i]);
        }
        }
}



















































