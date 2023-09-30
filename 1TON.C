//Write a program that prints 1, 3, 5, 7, ...., n
#include<stdio.h>
#include<conio.h>

void main()
{
     int num = 1, N;
     clrscr();

     printf("\nEnter any number. :");
     scanf("%d", &N);

     while (num <= N){
	    printf("%d\n", num);
	    num = num + 2;
     }
     getch();
}

