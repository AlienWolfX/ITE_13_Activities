// Allen Gabrielle S. Cruiz
// Github: https://www.github.com/AlienWolfX
#include <stdio.h>

int main(){
    int num1, num2, sum, diff, prod, quo, rem;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculation
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quo = num1 / num2;
    rem = num1 % num2;

    // Main
    printf("The sum is %d \n", sum);
    printf("The difference is %d \n", diff);
    printf("The product is %d \n", prod);
    printf("The quotient is %d \n", quo);
    printf("The remainder is %d \n", rem);

    // Equal/Not
    if(num1 != num2){
        printf("%d is not equal to %d \n", num1, num2);
    }
    else{
        printf("%d is equal to %d \n", num1, num2);
    }
    // Greater/Less
    if(num1 < num2){
        printf("%d is less than %d \n", num1, num2);
    }
    else{
        printf("%d is greater than %d \n", num1, num2);
    }
    // Greater/Less/Equal
    if(num1 <= num2){
        printf("%d is less than or equal to %d \n", num1, num2);
    }
    else{
        printf("%d is greater than or equal to %d \n", num1, num2);
    }
}
