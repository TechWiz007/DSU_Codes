#include<stdio.h>
#include<conio.h>
void main() {
int a[10], i, b=1, j=0, n,temp;
clrscr();
printf("Enter the strength of the array: \n");
scanf("%d:", &n);
printf("Enter the elements of the array");
for(i=0;i<n;i++) {
scanf("%d", &a[i]);
}
printf("Enter the element to be searched: \n");
scanf("%d", &temp);
for(i=0;i<n;i++) {
if(a[i]==temp) {
printf("Element found\n");
printf("Index = %d \n", i);
printf("Position = %d \n", b);
j=1;
}
b++;
}
if(j==0) {
printf("Element not found!");
}
getch();
}