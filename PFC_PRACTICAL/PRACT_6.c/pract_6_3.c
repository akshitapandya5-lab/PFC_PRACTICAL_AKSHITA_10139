#include <stdio.h>
//Name - Akshita pandya
//ERP ID - RU-25-10139
int main() {
    int i, n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0)
            continue;

        sum = sum + i;
    }

    printf("Sum of even numbers = %d\n", sum);

    return 0;
}
//Output - 
// PS C:\Users\ASUS-PC\Downloads\Practical 6> cd "c:\Users\ASUS-PC\Downloads\Practical 6\" ; if ($?) { gcc Two2.c -o Two2 } ; if ($?) { .\Two2 }
// Enter the value of n: 10
// Sum of even numbers = 30
