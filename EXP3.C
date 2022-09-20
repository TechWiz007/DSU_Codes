#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],size,i,beg,end,mid,searchelement;
clrscr();
printf("Enter size of array:\n");
scanf("%d",&size);
printf("Enter element of array:\n");
for(i=0;i<size;i++)
{scanf("%d",&a[i]);}
printf("Enter element to search:\n");
scanf("%d",&searchelement);
beg=0;
end=size-1;
mid=(beg+end)/2;
while(beg<=end && a[mid]!=searchelement)
{
if(searchelement<a[mid])
{end=mid-1;}
else
{beg=mid+1;}
mid=(beg+end)/2;}
if(a[mid]==searchelement)
{printf("Search is successful! ");
printf("Desired element is at position %d",mid);}
else
{printf("Search is unsuccessful");}
getch();
}
