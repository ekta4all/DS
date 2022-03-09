#include<stdio.h>

#define SIZE 10

int rear=-1, front=-1 ,queue[SIZE];

void insert();
void del();
void traverse();

int main()
{

    insert();
    insert();
    insert();
    traverse();
    del();
    traverse();
    del();
    traverse();
    del();
    traverse();
}

void insert()
{
    int item;

    if(rear>=SIZE)
        printf("\n Queue is full");
    else
        {
        if(front==-1)
        front=0;
        printf("\n enter the element>");
        scanf("%d",&item);
        rear++;
        queue[rear]=item;
    }

}

void del()
{

    if(front==-1)
        printf("\nQueue is empty");
        else
            {
                printf("\n Element deleted is %d",queue[front]);
        front++;
            }
            if(front>rear)
                front=rear=-1;

}


void traverse()
{
int i;
if(front==-1)
printf("\n Queue is empty");
else
{
   // printf("\n");
printf("\n Queue is :\n");
for(i=front;i<=rear;i++)
printf("\t %d",queue[i]);
printf("\n");
}
}















