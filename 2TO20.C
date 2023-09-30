//Write a program that prints 2, 4, 6 ,..., 20
#include<stdio.h>
#include<conio.h>

void main()
{
     int num = 2;
     clrscr();

     while (num <= 20){
	    printf("%d\n", num);
	    num = num + 2;
     }
     getch();
}