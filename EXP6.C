#include<stdio.h>
#include<conio.h>
void main()
{
int temp,i,j,n,a[100];
clrscr();
printf("\nenter the number of array elements:\t");
scanf("%d",&n);
printf("\nenter %d integers:\t",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<=n;i++)
{	
j=i;
while(j>0 &&a[j-1]>a[j])
{
temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;
j--;
}
}
for(i=0;i<n;i++)
printf("\nthe sorted array:%d",a[i]);
getch();
}
