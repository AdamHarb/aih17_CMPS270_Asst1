#include <stdio.h>
#include <Windows.h>

void hammingDistance(int x, int y) {
    int count = 0;

    int diff = x ^ y; // Setting the bits to 1 if they are different and to 0 if they are the same.


    while (diff) { // Incrementing count in case the current bit is a 1 which means that they are not the same across both integers
        count += diff & 1;
        diff >>= 1; // Shifting the difference to the right till we eventually reach the end of it
    }

    printf("%d \n", count);
}
int main() {

    int o1, o2;

    do{
        scanf("%d %d", &o1, &o2);
        hammingDistance(o1, o2);

    } while (o1 >= 0 && o2 >= 0);

    system("pause");

    return 0;
}