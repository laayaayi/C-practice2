#include <stdio.h>

int main() {
    int first;
    int second;

    while (1) {
        printf("Enter two positive integers: ");
        scanf("%d %d", &first, &second);

        if (first >= second) {
            printf("First number is larger than or equal to the second. error.\n");
            while(1); 
        }
       
        for (int i = second; i >= first; i -= 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}


