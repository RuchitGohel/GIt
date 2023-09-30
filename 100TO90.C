//Write a program that prints 100, 99 ,98,....,90
#include<stdio.h>
#include<conio.h>

void main()
{
     int num = 100;
     clrscr();

     while (num >= 90){
	   printf("%d\n", num);
	   num --;
     }
     getch();

}
