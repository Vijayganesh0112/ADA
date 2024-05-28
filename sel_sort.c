// selection sort program
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sel_sort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<=n-2;i++)
    {
        min=i;
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]<a[min])
                min=j;
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}
void main()
{
    int n;
    printf("Enter the No.of elements:");
    scanf("%d",&n);
    int a[n];
    srand(time(NULL));
    printf("The Original array:\n");
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%1000;
        printf("%d\t",a[i]);
    }
    printf("\n");
    clock_t start=clock();
    sel_sort(a,n);
    clock_t end=clock();
    double time=(end-start)/CLOCKS_PER_SEC;
    printf("Sorted Array:");
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
    printf("Time taken to sort %d elements is %f\n",n,time);
    printf("Time complexity:(n^2)\n");
}
