#include<stdio.h>
#include<conio.h>
#include<process.h>
int num, a[50];
void create();
void insert();
void del();
void display();
void main() {
int ch;
clrscr();
printf("Array Menu: ");
printf("\n1. Create\n2. Insert\n3. Delete\n4. Display\n5. Exit");
while(1) {
printf("Enter choice (1-5): ");
scanf("%d", &ch);
switch(ch) {
case 1 : create();
case 2 : insert();
case 3 : del();
case 4 : display();
case 5 : exit(0);
default : printf("\nWrong Choice");
}
}
getch();
}
void create() {
int i;
printf("\nEnter size of the array: ");
scanf("%d", &num);
printf("\nEnter array elements: ");
for (i=0;i<num;i++) {
scanf("%d", &a[i]);
}
}
void insert() {
int i,element,index;
printf("Enter an element to be inserted: ");
scanf("%d", &element);
printf("\nEnter the index of an element to be inserted: ");
scanf("%d", &index);
num++;
for (i=num-1;i>=index;i--) {
a[i+1]=a[i];
}
a[index]=element;
}
void del() {
int i, index;
printf("Enter index of the element to be deleted: ");
scanf("%d", &index);
for (i=index+1;i<=num-1;i++) {
a[i-1]=a[i];
}
num--;
}
void display() {
int i;
printf("\nThe elements of the array are: ");
for (i=0;i<num;i++) {
printf("%d", a[i]);
}
printf("\n");
}

