#include <stdio.h>
//Akshita pandya
//RU-25-10139
int main() {
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
//Output-
// PS C:\Users\ASUS-PC\Downloads\Practical 7> cd "c:\Users\ASUS-PC\Downloads\Practical 7\" ; if ($?) { gcc One1.c -o One1 } ; if ($?) { .\One1 }
// 5
//     *
//    ***
//   *****
//  *******
//  *******
//   *****
//    ***
//     *
