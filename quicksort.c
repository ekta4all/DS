#include<stdio.h>

int main()
{
    int a[5],low,high,pivot,i,j,temp;

    for(i=0;i<5;i++)
    {
        printf("\n enter the element>");
        scanf("%d",&a[i]);

    }
    i=0;
    low=0;
    high=4;
    pivot=a[4];

    for(j=low;j<high;j++)
    {
        if(a[j]<a[high])
        {
            i++;
            temp=a[j];
            a[j]=a[high];
            a[high]=temp;
        }
    }

    printf("\n After sorting array is\n");
    for(j=0;j<5;j++)
    {
        printf("\n%d",a[j]);
    }
}
