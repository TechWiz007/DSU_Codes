#include <stdio.h>
#include <conio.h>

int a[20], i, c;

void create() {
int n;
printf("Enter maximum number of array elements: ");
scanf("%d", &n);
printf("Enter the elements of the array: ");
for (i=0;i<n;i++)
scanf("%d", &a);
}
void insert() {
int num, num1, j;
printf("Enter the number of elements you want to insert: ");
scanf("%d", &num);
printf("Enter the elements: ");
for (j=0;j<num;j++)
scanf("%d", num1);
}
void display() {
printf("All the elements of the array are as follows: ");
for (i=0; i<=j; i++)
printf("%d", a[i]);
}
void main() {
clrscr();
create();
insert();
display();
getch();
}