#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	
	/*---------------------Introduction-----------------------*/
	printf("\t\t\t\t\t\tVerify the types of the system\n\n\n\n");
	/*--------------------------------------------------------*/
	
	
	/*-------------------------Char---------------------------*/
	signed char a;
	unsigned char b;
	/*--------------------------------------------------------*/
	
	
	
	/*-------------------------Int----------------------------*/
	signed int c;
	unsigned int d;
	
	signed short  e;
	unsigned short int f;
	
	signed long int g;
	unsigned long int h;
	/*--------------------------------------------------------*/
	
	
	
	/*-------------------------Float--------------------------*/
	float i;
	/*--------------------------------------------------------*/
	
	
	
	/*-------------------------Double-------------------------*/
	double j;
	long double k;
	/*--------------------------------------------------------*/
	
	
	
	/*-------------------------Char---------------------------*/
	printf("\n\t\tsigned char: \t\t%i  byte", sizeof(a));
	printf("\n\t\tunsigned char: \t\t%i  byte\n", sizeof(b));
	/*--------------------------------------------------------*/
	
	
	
	/*-------------------------Int----------------------------*/
	printf("\n\t\tsigned int: \t\t%i  bytes", sizeof(c));
	printf("\n\t\tunsigned int: \t\t%i  bytes", sizeof(d));
	printf("\n\t\tsigned short int: \t%i  bytes", sizeof(e));
	printf("\n\t\tunsigned short int: \t%i  bytes", sizeof(f));
	printf("\n\t\tsigned long int: \t%i  bytes", sizeof(g));
	printf("\n\t\tunsigned long int: \t%i  bytes\n", sizeof(h));
	/*--------------------------------------------------------*/
	
	
	
	/*-------------------------Float--------------------------*/
	printf("\n\t\tfloat: \t\t\t%i  bytes\n", sizeof(i));
	/*--------------------------------------------------------*/
	
	
	
	/*-------------------------Double-------------------------*/
	printf("\n\t\tdouble: \t\t%i  bytes", sizeof(j));	
	printf("\n\t\tlong double: \t\t%i bytes\n\n\n\n", sizeof(k));
	/*--------------------------------------------------------*/
	
	system("PAUSE");
		
}
