#include <stdio.h>

int main() {
    int entered, i;
    float average, sum=0.000;
    float numbers[50];
    printf("How many Numbers ?: ");        // Specifying how many numbers user want.
    scanf("%d", &entered);

    for (i = 0; i < entered; i++) {
        printf("Enter Number %d: ", i+1);        // Taking input from user
        scanf("%f", &numbers[i]);
    }
    
    for(i=0; i<entered; i++){                // Adding numbers
        sum += numbers[i];
    }
    average = sum / entered;                // Calculating average
    printf("\nAverage is: %.3f", average);
    
    return 0;

}
