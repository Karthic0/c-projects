#include <stdio.h>
#include<stdlib.h>
int main()
{
    signed int n;
    n = rand()%101;
    int i = 101;
    while(1){
        printf("Enter a number from 1 to 100: ");
        scanf("%d",&i);
        if (i==n){
            printf("U guesed it \U0001F609:\n");
            break;
        }
        (i < n)?printf("Too small.\n"):printf("Too large.\n");
    }
    return 0;
}