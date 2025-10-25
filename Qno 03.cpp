#include <stdio.h>

int main() {
    int range, i, j, count;

    printf("Enter the range of elements to be entered in an array: ");
    scanf("%d", &range);

    int array[range];

	printf("Enter the numbers in an array:\n");
	
    for (i = 0; i < range; i++) {
        
        scanf("%d", &array[i]);
    }

    // display the array
    printf("The numbers in the array are: [");
    for (i = 0; i < range; i++) {
        printf("%d", array[i]);
        if (i < range - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    // check the occurrence of numbers
    for (i = 0; i < range; i++) {
        count = 0;
        
        // check if this number was already printed before
        int alreadyCounted = 0;
        for (j = 0; j < i; j++) {
            if (array[i] == array[j]) {
                alreadyCounted = 1;
                break;
            }
        }

        if (alreadyCounted)
            continue; // skip duplicates

        for (j = 0; j < range; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }

        if (count > 1) {
            printf("%d occurred more than one time\n", array[i]);
        }
    }

    return 0;
}

