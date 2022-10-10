#include <stdio.h>
#define SIZE 10

void printArray(int x[], int n) {
    printf("Index Value \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\n", i, x[i]);
    }

}

void arrayHistogram(int x[], int n) {
    printf("Value Frequency Histogram\n");
    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (x[j] == x[i]) {
                freq++;
            }
        }
        printf("%d\t%d\t", x[i], freq);
        for (int k = 0; k < freq; k++) {
            printf("*");
        }
        printf("\n");
        i += freq - 1;
    }
}

int main() {
    int a[SIZE] = {1,1,1,4,5,6,7,8,9,10};
    printArray(a, SIZE);
    arrayHistogram(a, SIZE);

}