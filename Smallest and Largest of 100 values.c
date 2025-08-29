#include <stdio.h>

int main() {
    int i,N,Largest,Smallest;
    printf("Enter number 1: ");
    scanf("%d", &N);
    Largest = Smallest = N;
    for(i = 2; i <= 100; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &N);

        if(N>Largest) {
            Largest = N;
        }
        if(N<Smallest) {
            Smallest = N;
        }
    }

    printf("\nLargest number = %d",Largest);
    printf("\nSmallest number = %d\n",Smallest);
    return 0;
}

