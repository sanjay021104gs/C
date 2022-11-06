//to print the n natural numbers by for loop
#include <stdio.h>
#include <conio.h>

int main() {
int n,i;
printf("enter the value of n:\t");
scanf("%d",&n);
printf("printing the natural numbers from 1 to %d\n",n);
for(i=1;i<=n;i++)
printf("%d\t",i);

}