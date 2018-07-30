 #include <stdio.h>
   /* print Fahrenheit-Celsius table       for fahr = 0, 20, ..., 300 */  
int convert(int);
 void  main()
   {     int fahr, celsius;    
	 clrscr();
	 printf("\nenter temp in fahrenheit\n");
	 scanf("%d",&fahr);
	 printf("Celsius of this fahrenheit is %d",convert(fahr));
	 getch();
    }
   
     int convert(int fahr)
     {

	  return (5 * (fahr-32) / 9);

	 }   
