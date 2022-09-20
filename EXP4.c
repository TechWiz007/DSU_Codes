#include<stdio.h>
#include<conio.h>
void main()
{int arr[100],n;
int i,j,temp;
clrscr();
printf("enter total number of elements:");
scanf("%d",&n);
printf("enter array elements:\n");
for(i=0;i<n;i++)
{printf("enter element %d:",i+1);
scanf("%d",&arr[i]);}
for(i=0;i<(n-1);i++)
{for(j=0;j<(n-i-1);j++)
{if(arr[j]>arr[j+1])
{temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}}}
printf("array elements in asendering order:\n");
for(i=0;i<n;i++)
{printf("%d\n",arr[i]);}
printf("\n");
for(i=0;i<(n-1);i++)
{for(j=0;j<(n-i-1);j++)
{if(arr[j]<arr[j+1])
{temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;}
}}
printf("array element in desending order:\n");
for(i=0;i<n;i++)
{printf("%d\n",arr[i]);}
printf("\n");
getch();}
