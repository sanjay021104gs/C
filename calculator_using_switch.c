#include <stdio.h>

int main() {
char op;
float a,b,c=0.0f;
printf("enter the number and op:");

scanf("%f %c %f", &a, &op, &b);


switch(op) {
case '+': 
c=a+b;
break;

case '-':
c=a-b;
break;

case '*':
c=a*b;
break;

case '/':
c=a/b;
break;
}
printf("%.2f %c %.2f = %.2f",a,op,b,c);
return 0;
}