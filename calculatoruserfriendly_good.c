#include <stdio.h>
#include <stdlib.h>

int main(){
    double num1, num2;
    char operator;

    printf("You will be prompted to enter a number, an operator, then another number.\n");
    printf("Enter number: ");
    scanf("%lf", &num1);
    do {
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operator);

        if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
            printf("Please enter a valid operator.\n");
        }
    } while (operator != '+' && operator != '-' && operator != '*' && operator != '/');
    printf("Enter number: ");
    scanf("%lf", &num2);

    if(operator == '+'){
        printf("%lf\n", num1 + num2);
    } else if(operator == '-'){
        printf("%lf\n", num1 - num2);
    } else if(operator == '/'){
       if (num2 != 0) {
        printf("%lf\n", num1 / num2);
       } else {
        printf("Cannot divide by zero\n");
       }
    } else if(operator == '*'){
        printf("%lf\n", num1 * num2);
    } else {
        printf("Please enter a valid operator.");
    }
    return 0;
}