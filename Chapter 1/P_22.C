/*Write a program to ``fold'' long input lines into two
 or more shorter lines after the last non-blank character that
 occurs before the n-th column of input. Make sure your program does something
 intelligent with very long lines, and if there are no blanks or tabs before the specified column. */


 #include <stdio.h>
  #define LIMIT 500
  // int input(char line[], int maxline);

 void     main()
 {

 char c;
 int i=0,count=0;
 char *s;
 clrscr();

 // while((c=getchar())!=EOF)
 printf("Enter any string");
while((c=getchar())!=EOF)

   {


count++;
if (count>=14)
{
if(c==' ')
{
printf("\n");
count=0;
}
}
putchar(c);
}
}