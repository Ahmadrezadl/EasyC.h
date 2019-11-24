

#ifndef _JAVASTYLE_H
#define _JAVASTYLE_H

#ifndef __cplusplus

#define bool	_Bool
#define true	1
#define false	0
#include <stdio.h>
#include <stdarg.h>
#define typename(x) _Generic((x) ,int : "int",float : "float" , char : "char" , char* : "charp")

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
	while(n == ' ')scanf("%c" , &n);
	return n;
}

char nextCharOrSpace(){
	char n;
	scanf("%c" , &n);
	return n;
}

bool nextBool(){
	int n;
	scanf("%d" , &n);
	if(n) return true;
	else return false;
}

//int sout(const char* format, ...){
//	int result = 0;
//	char buffer[10000];
//	va_list args;
//	va_start(args,format);
//	if(strcmp(typename(args),"int"))
//	printf("int = %d = " , va_arg(args,int));
//	else if(strcmp(typename(args),"float"))
//	printf("float = %f = " , va_arg(args,float));
//	else print("null");
//	
//	result = vsprintf(buffer,format,args);
//	
//	va_end(args);
//	if(result > 0)
//	{
//		result = puts(buffer);
//	}
//	
//	return result;
//	
//}

#else
#define _Bool	bool
#define bool	bool
#define false	false
#define true	true
#endif
#define __bool_true_false_are_defined	1
#endif

