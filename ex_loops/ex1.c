#include <stdio.h>

int main() {
    int count = 0; 
    int num;       

    for (int i = 0; i < 20; i++) 
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num < 0) 
        {
            count++; 
        }
    }

    printf("Negative numbers entered: %d\n", count);

    return 0;
}