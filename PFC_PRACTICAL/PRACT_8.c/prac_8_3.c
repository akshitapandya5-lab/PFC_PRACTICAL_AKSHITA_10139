#include <stdio.h>
//Akshita pandya
//RU-25-10139
void printTriangle(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printTriangle(n);
    return 0;
}
// Output - 
// PS C:\Users\ASUS-PC\Downloads\Practical 8> cd "c:\Users\ASUS-PC\Downloads\Practical 8\" ; if ($?) { gcc Three3.c -o Three3 } ; if ($?) { .\Three3 }
// 5
// *
// **
// ***
// ****
// *****
