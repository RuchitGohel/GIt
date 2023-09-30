/*
Write a program that prints 1 10 2 9 3 8 4 7 5 6 6 5 7 4 8 3 9 2 10 1
*/

#include<stdio.h>
#include<conio.h>

void main()
{
     int n = 1, m = 10;
     clrscr();

     while (n <= 10 && m >= 1){
	   printf("\n%d \n%d", n, m);
	   n++, m--;
	   }

     getch();
}