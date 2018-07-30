


//Write a program to print a histogram of the lengths of words in its input.




#include<stdio.h>
#include<conio.h>
void main()
{
//char a[10];
int i,j,a[10],n;
clrscr();
printf("enter size of an array");
scanf("%d",&n);
printf("enter values of an array");
for (i=0;i<n;i++)
scanf("%d",&a[i]);
for (i=0;i<n;i++)
{
printf("%d\t%d\t",i,a[i]);
for(j=0;j<a[i];j++)
{
printf("*");
}
printf("\n");
}
getch();
}