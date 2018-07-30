// Revise the main routine ofthe longest-line program so it will correctly print the 
//length of arbitrary long input lines, and as much as possible of the text. 
  #include <stdio.h>
  #define LIMIT 500
   int input(char line[], int maxline);
   void copy(char to[], char from[]);
 void     main()
 {
 int len=0;
 int max=0;
 int lent;
 char curr[LIMIT];
 char longest[LIMIT];
 clrscr();
	   while ((len = input(curr, LIMIT)) > 0)
		   if (len > max)
		     {
			max = len;
			copy(longest, curr);
		     }
	  if (max > 0)
	  {
	  lent=strlen(longest);
	  printf("\n%s", longest);
	  printf("\nlength of longest string is= %d",lent);
	  }
 getch();
 }

   int input(char s[],int limit)
   {
   int i;
   char c;
   for (i=0; i < limit-1 && (c=getchar())!=EOF && c!='\n'; i++)
		   s[i] = c;
	   if (c == '\n')
	   {
   s[i] = c;
   i++;
   }
   s[i] = '\0';
   return i;
   }
  /* copy:  copy 'from' into 'to'; assume to is big enough */
  void copy(char longest[], char current[])
  {
  int i=0;
	   while ((longest[i] =current[i]) != '\0')
		   i++;
	   }