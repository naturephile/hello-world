//loading app
/* Author: Y45H
   Date: 27/06/2019
   cotact: positruth@protonmail.com 
*/

#include<stdio.h>
#include <stdlib.h>
int c,i,j;
void delay(float a)
{
for(i=0;i<a*10000;i++)
{
	for(j=0;j<a*10000;j++)
	{
	}	
}
}
void clr(int c)
{
printf("\e[%dm",c);
}

void main(int argc,char **argv)
{
int i,j,k,n,cn=0;

if(argc!=2)
{
printf("\noperand missing.\nUsage: loadingy intnumber(color[30 to 37]) \n)");
return;
}

c=atoi(argv[1]);

for(i=0;i<10;i++) //vertical
{
	for(j=0;j<=i;j++) //horizontal
	{
clr(c);
	printf(">");
	fflush(stdout);
	delay(0.8);
	}

cn++;		
printf(" %d%%",cn*10);
printf("\n");
delay(1.4);
printf("\e[m");
system("clear");
}
}

