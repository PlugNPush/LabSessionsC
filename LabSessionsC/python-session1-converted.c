//
//  python-session1-converted.c
//  LabSessionsC
//
//  Created by PlugN on 26/09/2019.
//  Copyright © 2019 Groupe MINASTE. All rights reserved.
//

#include "python-session1-converted.h"

int main(int argc, const char * argv[]) {
    
    printf("Welcome. Chose one option to start.\n1 - Addition of 2 numbers\n2 - Addition of 3 numbers\n3 - Draw an F with # signs\n4 - Draw a C with # signs\n5 - Draw 5 F with # signs\n6 - Write personal informations\n7 - Hello!\n8 - Average calculation\n9 - Elapsed time calculator\n10 - Check if two number are equal\n11 - Even or Odd numbers\n12 - Maximum and minimum\n13 - Sum of x*x.\n14 - Xn and Wn\n15 - Leap Year\n16 - DELTA (C++ Edition)\n17 - Calculator\n18 - Rectangle data\n19 - PENDING...\n");
    int choice;
    scanf("%d", &choice);
    printf("\n");
    if (choice == 1) {
        int nb;
        printf("Enter the first number : ");
        scanf("%d", &nb);
        int nb2;
        printf("\nEnter the second number : ");
        scanf("%d", &nb2);
        nb = nb + nb2;
        printf("\nThe result is %d", nb);
    }
    else if (choice == 2){
        int nb, nb2, nb3;
        printf("Enter the first number : ");
        scanf("%d", &nb);
        printf("\nEnter the second number : ");
        scanf("%d", &nb2);
        printf("\nEnter the third number : ");
        scanf("%d", &nb3);
        nb = nb + nb2 + nb3;
        printf("\nThe result is %d", nb);
    }
    else if (choice == 3){
        printf("#####\n#\n#\n####\n#\n#\n#\n");
    }
    else if (choice == 4){
        printf("       ######\n  ##          ##\n#\n#\n#\n#\n#\n  ##          ##\n       ######\n");
    }
    else if (choice == 5){
        printf("#####   #####   #####   #####   #####\n#       #       #       #       #\n#       #       #       #       #\n####    ####    ####    ####    ####\n#       #       #       #       #\n#       #       #       #       #\n#       #       #       #       #\n");
    }
    else if (choice == 6){
        printf("Name: Michael\nDate of birth: 07/07/2000\nMobile phone number: +381 61 615 6844\n");
    }
    else if (choice == 7){
        char firstname[30];
        printf("What's your first name? ");
        scanf("%s", firstname);
        char lastname[30];
        printf("Okay, what about your last name? ");
        scanf("%s", lastname);
        printf("Hello first name last name");
        fflush(stdout);
        sleep(3);
        printf("\nJust kidding, Hello %s %s!\n", firstname, lastname);
    }
    else if (choice == 8){
        int nb, nb2, nb3;
        printf("Enter the first number : ");
        scanf("%d", &nb);
        printf("Enter the second number : ");
        scanf("%d", &nb2);
        printf("\nEnter the third number : ");
        scanf("%d", &nb3);
        nb = (nb + nb2 + nb3)/3;
        printf("\nThe result is %d", nb);
    }
    else if (choice == 9){
        int odays;
        printf("How many days elapsed? ");
        scanf("%d", &odays);
        int nbyears = odays/365;
        int restyears = odays%365;
        int nbweeks = restyears/7;
        int restweeks = restyears%7;
        int nbdays = restweeks;
        printf("For %d elapsed days, it has been %d years, %d weeks and %d days.", odays, nbyears, nbweeks, nbdays);
    }
    else if (choice == 10){
        int nba;
        printf("Please enter the first number: ");
        scanf("%d", &nba);
        int nbb;
        printf("Please enter the second number: ");
        scanf("%d", &nbb);
        if (nba == nbb) {
            printf("These two numbers are equal.");
        } else {
            printf("These two numbers are not equal.");
        }
    }
    else if (choice == 11){
        int number;
        printf("Please enter the number: ");
        scanf("%d", &number);
        if (number % 2 == 0) {
            printf("%d is an Even number.", number);
        } else {
            printf("%d is an Odd number.", number);
        }
    }
    else if (choice == 12){
        int nba;
        printf("Please enter the first number: ");
        scanf("%d", &nba);
        int nbb;
        printf("Please enter the second number: ");
        scanf("%d", &nbb);
        int nbc;
        printf("Please enter the third number: ");
        scanf("%d", &nbc);
        fflush(stdout);
        int maximum;
        int minimum;
        if (nba < nbb) {
            maximum = nbb;
            minimum = nba;
            if (nbb > nbc) {
                maximum = nbb;
                if (nbc > nba) {
                    minimum = nba;
                } else {
                    minimum = nbc;
                }
            } else {
                maximum = nbc;
                if (nbb > nba) {
                    minimum = nba;
                } else {
                    minimum = nbb;
                }
            }
        } else {
            maximum = nba;
            minimum = nbb;
            if (nba > nbc) {
                maximum = nba;
                if (nbb > nbc) {
                    minimum = nbc;
                } else {
                    minimum = nbb;
                }
            } else {
                maximum = nbc;
                if (nba > nbb) {
                    minimum = nbb;
                } else {
                    minimum = nba;
                }
            }
        }
        printf("The maximum of these number is %d and the minimum is %d", maximum, minimum);
    }
    else if (choice == 13){
        double x;
        int n;
        printf("What's the value of x? ");
        scanf("%lf", &x);
        printf("What's the value of n? ");
        scanf("%d", &n);
        int res = 0;
        double i = 1;
        for (i=1; i<=n+1; i++) {
            printf("%d = %d + %f", res, res, pow(x,i));
            res = res + pow(x,i);
        }
        printf("\n");
        if (res == 0) {
            printf("%d", res+1);
        } else {
            printf("%d", res);
        }
    }
    else if (choice == 14){
        int x = -1;
        int w = 2;
        int n;
        printf("Enter the value of n: ");
        scanf("%d", &n);
        int i = 1;
        while (i != n) {
            printf("%d X: %d = %d - %d", i, x, x, w);
            x = x - w;
            printf("%d X: %d = %d + %d", i, x, x, w);
            w = x + w;
            i = i + 1;
        }
        printf("\n");
        printf("Xn = %d and Wn = %d", x, w);
    }
    else if (choice == 15){
        int year;
        printf("Please enter the year: ");
        scanf("%d", &year);
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            printf ("The year %d is a leap year.", year);
        } else {
            printf ("The year %d is not a leap year.", year);
        }
    }
    else if (choice == 16){
        char chs[20];
        printf("Choose mode.\na - blocking a = 0\nb - looping a = 0\nc or other - raw mode\n");
        scanf("%s", chs);
        int a, b, c;
        printf("Enter the value of a: ");
        scanf("%d", &a);
        if (a == 0) {
            if (strncmp(chs, "a", strlen(chs)) == 0) {
                printf("This equation is not a 2nd degree equation.\n");
                exit(EXIT_FAILURE);
            } else if (strncmp(chs, "b", strlen(chs)) == 0){
                while (a == 0) {
                    printf("Enter the value of a != 0: ");
                    scanf("%d", &a);
                }
            }
        }
        printf("Enter the value of b: ");
        scanf("%d", &b);
        printf("Enter the value of c: ");
        scanf("%d", &c);
        int delta = b*b - 4*a*c;
        if (a == 0 && c < 0) {
            printf("For %dx %d", b, c);
        } else if (a == 0 && c >= 0){
            printf("For %dx + %d", b, c);
        } else if (b < 0 && c < 0){
            printf("For %dx² %dx %d, Δ = %d", a, b, c, delta);
        } else if (b < 0 && c > 0){
            printf("For %dx² %dx + %d, Δ = %d", a, b, c, delta);
        } else if (b > 0 && c < 0){
            printf("For %dx² + %dx %d, Δ = %d", a, b, c, delta);
        } else {
            printf("For %dx² + %dx + %d, Δ = %d", a, b, c, delta);
        }
        
        if (a == 0) {
            int x0 = (-c)/b;
            printf("This degree 1 equation has one solution.\nx = %d", x0);
        } else if (delta < 0){
            printf("No real solution in R.");
        } else if (delta == 0){
            int x0 = -b / 2*a;
            printf("There is one solution in R for this equation.\nx0 = %d", x0);
        } else {
            // printf(sqrt(delta));
            int x1 = (-b - sqrt(delta)) / (2*a);
            int x2 = (-b + sqrt(delta)) / (2*a);
            printf("There are two solutions in R for this equation.\nx0 = %d\nx1 = %d", x1, x2);
        }
    }
    else if (choice == 17){
        char op[20];
        printf("Please chose an operation (+, /, * or -): ");
        scanf("%s", op);
        int a, b;
        printf("What's the first number? ");
        scanf("%d", &a);
        printf("What's the second number? ");
        scanf("%d", &b);
        if (strncmp(op, "+", strlen(op)) == 0) {
            printf("%d + %d = %d", a, b, a+b);
        } else if (strncmp(op, "-", strlen(op)) == 0){
            printf("%d - %d = %d", a, b, a-b);
        } else if (strncmp(op, "*", strlen(op)) == 0){
            printf("%d * %d = %d", a, b, a*b);
        } else if (strncmp(op, "/", strlen(op)) == 0){
            if (b == 0) {
                printf("IMPOSSIBLE: Nobody can divide by zero, not even a quantic computer.");
            } else {
                printf("%d / %d = %d", a, b, a/b);
            }
        } else {
            printf("The operation symbol has not been recognized.");
        }
    }
    else if (choice == 18){
        int length;
        printf("Enter the length of the rectangle: ");
        scanf("%d", &length);
        int width;
        printf("Enter the width of the rectangle: ");
        scanf("%d", &width);
        double perimeter = 2*length + 2*width;
        double surface = length*width;
        printf("Your rectangle has a perimeter of %f and a surface of %f", perimeter, surface);
    }
        
    else {
        printf("Error on in the selection.");
    }
    
    printf("\n");
    
}
