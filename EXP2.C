#include <stdio.h>
#include <conio.h>
#include <string.h>
void main() {
clrscr();
int a[5], num1, num2, i;
printf("Enter the number of elements to form array: \n");
scanf("%d", &num1);
printf("Enter the elements: \n");
for (i=1;i<=num1;i++) {
scanf("%d", &a[i]);
}
printf("Enter the element to be searched: \n");
scanf("%d", &num2);
if(a[1]==num2 || a[2]==num2 || a[3]==num2 || a[4]==num2 || a[5]==num2) {
printf("Element found!\n");
}
else {
printf("Element is invalid\n");
}
getch();
}