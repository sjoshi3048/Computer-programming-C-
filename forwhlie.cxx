#include <stdio.h>
#include <conio.h>

void main() {
    int i = 1, n;
    clrscr();   // clear the screen

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= n) {
        printf("%d\n", i);
        i++;
    }

    getch();    // wait for key press
}