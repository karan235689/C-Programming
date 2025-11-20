// SORT ARRAY OF NUMBERS IN ASCENDING ORDER USING BUBBLE SORT.

#include <stdio.h>

int main() {
    int i, temp, j, nums;

    printf("How much numbers do you want to store: ");
    scanf("%d", &nums);

    int array[nums];
    printf("Enter Numbers: \n");
    for(i=0; i<nums; i++){
        printf("Enter Number %d: ", i+1);
        scanf("%d", &array[i]);
    }

    for(i = 0; i < nums; i++){
        for (int j = i+1; j < nums; j++) {
            if(array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Ascending order:\n");
    for(i=0; i<nums; i++){
        printf("%d ", array[i]);
    }
    return 0;
}