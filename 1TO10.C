//Write a program that prints 1 to 10

#include<stdio.h>
#include<conio.h>

void main()
{
     int num = 1;
     clrscr();

     while (num <= 10){
	   printf("%d\n", num);
	   num++;
     }
     getch();
}