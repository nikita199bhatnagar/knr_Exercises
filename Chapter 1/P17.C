//Write a program to print all input lines that are longer than 80 characters.

  #include <stdio.h>
  #define LIMIT 500
   int input(char line[], int maxline);
   void copy(char to[], char from[]);
   char gg[100][100];
 int k,m,n;
 void     main()
 {
 int len=0;
 int max=0;
 int lent;
 char curr[LIMIT];
 char longest[LIMIT];

 clrscr();
	   while ((len = input(curr, LIMIT)) > 0)
		   if (len > 80)
		     {
		       //	max = len;
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
	   // printf("%s",s);
	   if(strlen(s)>=20)
	     {
	     gg[k][i]=s[i];

	     }
	     k++;
	    i++;
	    }
   //s[i] = '\0';
   for(m=0;m<=k;m++)
   {
   for(n=0;n<=i;n++)
   {
   printf("%c",gg[m][n]);
  // return ;
   }
   ptintf("\n");
   }
   return 0;
   }
  /* copy:  copy 'from' into 'to'; assume to is big enough */
  void copy(char longest[], char current[])
  {
  int i=0;
	   while ((current[i]) != '\0')

		   i++;
	   }