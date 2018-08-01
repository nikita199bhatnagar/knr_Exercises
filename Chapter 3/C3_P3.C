/* Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete
 list abc...xyz in s2. Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9
 and -a-z. Arrangehat a leading or trailing - is taken literally.*/
#include <stdio.h>

#define LEN 100
void expand (char s[], char m[]);
void main()
{

  char s[LEN], t[LEN],m[100],c;
  int i;
  clrscr();
  printf("\nEnter the string: \n");
  for (i=0; i < LEN && (c=getchar())!=EOF; i++)
    s[i] = c;
  
  s[i] = '\0';
  printf("\n\nEntered string is:%s",s);
  expand(s, m);
  printf("\nThe expandes string is: %s\n", m);
  getch();
}
void expand (char s[], char m[])
{      
  int i = 0,k,j=0;
  char c,b;
  while(s[i]!='\0')
  {
      switch (s[i])
	  {
	   case '-':
	   {
	     c=s[i+1];
	     b=s[i-1];

	     for(k=b+1;k<c;k++)
	       {
		     m[j]=k;
	         j++;
	       }
	     i++;
	     break;
	    }
	    default:
	     m[j++] = s[i++];
	     break;
       }
   }
   m[j+1]='\0';
 }