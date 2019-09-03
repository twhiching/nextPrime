#include <stdio.h>

/* This program finds prime numbers until the user chooses to stop asking for the next one. */
int isPrime(int number){

	int i;

	if(number == 2)
		return 1;
	for(i = 2; i < number; ++i){

		if((number % i) == 0)
			return 0;
	}
	return 1;
}

int main(int argc, char *argv[]){


	int c,i;

	i = 2;
	printf("To see the next prime number press the enter key.\nIf you would like to termiante the program use the buttons Control-d\n");
	while((c = getchar()) != EOF){

		while(!isPrime(i)){
			++i;
		}
		printf("%d",i);
		++i;

	}
	printf("\n");
	return 0;
}
