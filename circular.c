#include<stdio.h>

#define SIZE 3

int q[SIZE],front=0,rear=-1;

int main()
{
    insert();
    insert();
    insert();
    display();
    del();
    display();
    insert();
    display();

}

void insert()
{

    int x;

    if ((front==0 && rear==SIZE-1) || (front>0 && rear==front-1))
        printf("\n Queue is full");

        else
            {
            printf("\n Enter the element>");
            scanf("%d",&x);
            if(rear==SIZE-1 && front>0)
            {
                rear=0;
                q[rear]=x;
            }

            else
            {
                if((front==0 && rear==-1) || (rear!=front-1))
                {


                    q[++rear]=x;

                }

            }
        }
    }


void del()
{
    int a;

    if((front==0)&&(rear==-1))
    {
        printf("\n Queue is empty");
        exit(0);
    }

    if(front==rear)
    {
        a=q[front];
        rear=-1;
        front=0;
    }

    else if(front==SIZE-1)
        {
            a=q[front];
            front=0;
        }
        else
            a=q[front++];
        printf("\n Element deleted is %d",a);

    }



void display()
{

    int i,j;

    if(front==0 && rear==-1)
    {
        printf("\n Queue is empty");
        exit(0);
    }
     printf("\n queue is ...\n");
    if(front>rear)
    {
        for(i=0;i<=rear;i++)
            printf("\n %d",q[i]);
        for(j=front;j<=SIZE-1;j++)
            printf("\n %d",q[j]);
    }
    else
    {
        for(i=front;i<=rear;i++)
            printf("\n %d",q[i]);

    }
    printf("\n");
}


































