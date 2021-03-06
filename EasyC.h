

#ifndef _EASYC_H
#define _EASYC_H

#ifndef __cplusplus

#define bool	_Bool
#define true	1
#define false	0
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#define typename(x) _Generic((x) ,int : "int",float : "float" , char : "char" , char* : "charp")
#define print printf
#define foreach(X,Y) for(int X = 0;X < Y;X++)
#define count(X) for(int COUNTING_DL = 0;COUNTING_DL < X;COUNTING_DL++)

int nextInt()
{
	int n;
	scanf("%d" , &n);
	return n;
}
float nextFloat(){
	float n;
	scanf("%f" , &n);
	return n;
}
double nextDouble(){
	double n;
	scanf("%lf" , &n);
	return n;
}
char nextChar(){
	char n = ' ';
	while(n == ' ' || n == '\n')scanf("%c" , &n);
	return n;
}

char nextCharOrSpace(){
	char n;
	scanf("%c" , &n);
	return n;
}

char* nextWord()
{
	char n[200];
	scanf("%s" , n);
	return n;
}

void endl(){
	printf("\n");
}

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)        
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 

void printInt(int n,char c)
{
	printf("%d%c" , n , c);
}
bool nextBool(){
	char n[20];
	scanf("%s" , &n);
	if(!strcmp(n,"1") || !strcmp(n,"yes") || !strcmp(n,"y") || !strcmp("Yes" , n) || !strcmp("Y" , n) || !strcmp("true", n) || !strcmp("True", n) || !strcmp("yeah" , n)|| !strcmp("Yeah" , n))
	return true;
	return false;
}

char * __cdecl next(char * __restrict__ _Dest)
{
	strcpy(_Dest,nextWord());
}


int printLn(const char* format, ...){
	int result = 0;
	char buffer[10000];
	va_list args;
	va_start(args,format);

	result = vsprintf(buffer,format,args);
	
	va_end(args);
//	if(result > 0)
	{
		result = puts(buffer);
	}
	return result;
	
}

#else
#define _Bool	bool
#define bool	bool
#define false	false
#define true	true
#endif
#define __bool_true_false_are_defined	1
#endif

