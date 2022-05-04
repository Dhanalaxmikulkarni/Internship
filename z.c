#include<stdio.h>
main()
{

char b;
do
{
printf("enter=");
scanf(" %c",&b);
}
while(!(b=='z'||b=='Z'));
printf("exiting");
}
