#include<stdio.h>

int main()
{

    int a[5],i,j,temp;

    for(i=0;i<5;i++)
    {
        printf("\n Enter the element>");
        scanf("%d",&a[i]);

    }

    for(i=1;i<=5;i++)
    {

        j=i;  //j=3

        while(j>=0 && a[j-1]>a[j])
        {

            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }

    for(i=0;i<5;i++)
    {
        printf("\n %d",a[i]);
    }




}
