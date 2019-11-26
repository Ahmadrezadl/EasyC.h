#include <stdio.h>
#include <stdbool.h>

int main(){
	printf("Enter your name:");
	char name[200];
	scanf("%s" , name);
	printf("Hi %s! Welcome to JavaStyle Example.\n" , name);
	printf("Enter Your Age: ");
	int age;
	scanf("%d" , &age);
	printf("Oh, Your Are %s" , age < 20 ? "a Teenager\n" : age <45? "an Adult\n" : "So Old\n");
	printf("Do you like our header file? ");
	bool like;
	char n[10];
	scanf("%s" , &n);
	if(!strcmp(n,"1") || !strcmp(n,"yes") || !strcmp(n,"y") || !strcmp("Yes" , n) || !strcmp("Y" , n) || !strcmp("true", n) || !strcmp("True", n))
	printf("Great, Thanks!");
	else
	printf("Why not? Contact @Ahmadrezadl for suggestions");
}

