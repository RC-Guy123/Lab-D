#include <stdio.h>
int main(void){
	// Read number from file - do not edit
	double num;
	FILE *fptr;
	fptr = fopen("number.txt", "r");
	if(fptr == NULL) { // display error if can't open file
        printf("Error. Not able to open the file.");
		return 1;
        }
	fscanf(fptr, "%lf", &num);
	fclose(fptr);
	// Your code below here
	const char *name = "Austin Jewell";
    const char *email = "austin.jewell@student.manchester.ac.uk";
    double number1 = num;
    double number2 = num;
    printf("{\"name\": \"%s\",\n", name);
    printf(" \"email\": \"%s\",\n", email);
    printf(" \"number1\": %.2f,\n", number1);
    printf(" \"number2\": %.3e}\n", number2);
	// Do not edit below here
	return 0;
}