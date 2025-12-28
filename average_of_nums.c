#include <stdio.h>

int main() {
    int entered, i;
    float average, sum=0.000;
    int numbers[100];
    printf("How many Numbers ?: ");
    scanf("%d", &entered);

    for (i = 0; i < entered; i++) {
        printf("Enter Number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    
    for(i=0; i<entered; i++){
        sum += numbers[i];
    }
    average = sum / entered;
    printf("\nAverage is: %.3f", average);
    return 0;
}