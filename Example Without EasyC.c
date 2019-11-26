#include <stdio.h>
#include <stdbool.h>

int main(){
	
	//Name Asking:
	printf("Enter your name:");
	char name[200];
	scanf("%s" , name);
	printf("Hi %s! Welcome to JavaStyle Example.\n" , name);
	
	//Age Asking:
	printf("Enter Your Age: ");
	int age;
	scanf("%d" , &age);
	printf("Oh, Your Are %s" , age < 20 ? "a Teenager\n" : age <45? "an Adult\n" : "So Old\nLet's Count:\n'");
	
	//Couting:
	for(int i = 0;i < 10;i++)
	printf("%d\n" , i+1);
	
	//Easier Counting? :
	int counter = 20;
	while(counter--)
		printf("_");
	printf("\n");
	
	//Ask yes or no question:
	printf("Do you like our header file? ");
	bool like;
	char n[10];
	scanf("%s" , &n);
	if(!strcmp(n,"1") || !strcmp(n,"yes") || !strcmp(n,"y") || !strcmp("Yes" , n) || !strcmp("Y" , n) || !strcmp("true", n) || !strcmp("True", n))
	printf("Great, Thanks!");
	else
	printf("Why not? Contact @Ahmadrezadl for suggestions");
}

