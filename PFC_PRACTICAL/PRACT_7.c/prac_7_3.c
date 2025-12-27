#include <stdio.h>
//Akshita pandya
//RU-25-10139
int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
// Output - 
// PS C:\Users\ASUS-PC\Downloads\Practical 7> cd "c:\Users\ASUS-PC\Downloads\Practical 7\" ; if ($?) { gcc Three3.c -o Three3 } ; if ($?) { .\Three3 }
// A
// AB
// ABC
// ABCD
