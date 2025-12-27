#include <stdio.h>
//Name - Akshita pandya
//ERP ID - RU -25-10139

int main() {
    int pin = 1234, enteredPin, attempts = 0;

    while (attempts < 3) {
        printf("Enter ATM PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            printf("Authentication Successful\n");
            return 0;
        } else {
            printf("Incorrect PIN\n");
        }

        attempts++;
    }

    printf("Card Blocked. Too many incorrect attempts\n");

    return 0;
}

// PS C:\Users\ASUS-PC\Downloads\Practical 6> cd "c:\Users\ASUS-PC\Downloads\Practical 6\" ; if ($?) { gcc Three3.c -o Three3 } ; if ($?) { .\Three3 }
// Enter ATM PIN: 2348
// Incorrect PIN
// Enter ATM PIN: 1235
// Incorrect PIN
// Enter ATM PIN: 9765
// Incorrect PIN
// Card Blocked. Too many incorrect attempts
// PS C:\Users\ASUS-PC\Downloads\Practical 6> cd "c:\Users\ASUS-PC\Downloads\Practical 6\" ; if ($?) { gcc Three3.c -o Three3 } ; if ($?) { .\Three3 }
// Enter ATM PIN: 1234
// Authentication Successful
