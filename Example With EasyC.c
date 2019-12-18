#include "EasyC.h"

int main(){
	//Name Asking:
	print("Enter Your Name:");
	char name[200];
	printLn("Hi %s! Welcome to JavaStyle Example." , next(name));
	
	//Age Asking:
	print("Enter Your Age: ");
	int age = nextInt();
	printLn("Oh, Your Are %s" , age < 20 ? "a Teenager\nLet's Count:" : age <45? "an Adult\nLet's Count:" : "So Old\nLet's Count:");
	
	//Counting:
	foreach(i,10)
		printInt(i+1,'\n');

	//Easier Counting:
	count(20)
		print("_");
	
	int a[] = {2,3,1,4,5};
	bubbleSort(a,5);
	endl();
	
	//Ask yes or no question:
	printLn("Do you like our header file? ");
	printf(nextBool() ? "Great, Thanks!" : "Why not? Contact @Ahmadrezadl for suggestions");
	
}
