// Online C compiler to run C program online
#include <stdio.h>

void main() {
int a[2][3],b[2][3],c[2][3];
printf("enter the matrix a:\n");
for(int i=0;i<2;i++)
{
for(int j=0;j<3;j++) {
    scanf("%d",&a[i][j]);
    }
}
printf("enter the matrix b:\n");
for(int i=0;i<2;i++)
{
for(int j=0;j<3;j++) {
    scanf("%d",&b[i][j]);
    }
}
printf("the first matrix is :\n");
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++) 
    {
    printf("%d\t",a[i][j]);
    }   
    printf("\n");
}
printf("the second matrix is :\n");
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++) 
    {
    printf("%d\t",b[i][j]);
    }   
    printf("\n");
}
printf("\nthe third matrix is:\n");
for(int i=0;i<2;i++)
{
for(int j=0;j<3;j++) 
    {
    c[i][j]=a[i][j]+b[i][j];
    printf("%d\t",c[i][j]);
    }   
    printf("\n");
}


}
 
