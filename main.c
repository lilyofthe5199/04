#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input;
	int hour, sec, min;
	
	printf("input the second : ");
	scanf("%i", &input);
	
	hour = input/(60*60);
	min = (input%(60*60))/60;
	sec = input%60;
	
	printf("The time for %i second is %i : %i : %i\n", input, hour, min, sec);
	return 0;
}
