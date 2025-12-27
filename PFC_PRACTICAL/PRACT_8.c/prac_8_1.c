#include <stdio.h>
//Akshita pandya
//RU-25-10139
int sumOfDigits(int n) {
    int sum = 0;

    while (n != 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }

    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sumOfDigits(n));
    return 0;
}
// Output - 
// PS C:\Users\ASUS-PC\Downloads\Practical 8> cd "c:\Users\ASUS-PC\Downloads\Practical 8\" ; if ($?) { gcc One1.c -o One1 } ; if ($?) { .\One1 }
// 632
// 11
