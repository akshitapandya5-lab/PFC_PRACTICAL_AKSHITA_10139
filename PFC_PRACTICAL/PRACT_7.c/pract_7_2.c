#include <stdio.h>
//Akshita pandya
//ERP ID - RU-25-10139
int main() {
    int n, i, j;

    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    for (i = 2; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
// Output - 
// PS C:\Users\ASUS-PC\Downloads\Practical 7> cd "c:\Users\ASUS-PC\Downloads\Practical 7\" ; if ($?) { gcc Two2.c -o Two2 } ; if ($?) { .\Two2 }
// 6  
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
