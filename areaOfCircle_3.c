//To find  the area of the circle
#include <stdio.h>
#include <conio.h>
#define Pi 3.141

int main()  {
float radius, area;
printf("Enter the value for radius :\n ");
scanf("%f",&radius);
area= Pi * radius * radius ;
printf("The area is: \n",area);
getch();
}