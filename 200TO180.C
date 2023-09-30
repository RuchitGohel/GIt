/*
Write a program that prints 200, 198, 196,...., 180.
*/

#include<stdio.h>
#include<conio.h>

void main()
{
     int num = 200;
     clrscr();

     while (num >= 180){
	    printf("%d\n", num);
	    num = num - 2;
     }
     getch();
}