// Allen Gabrielle S. Cruiz
// Github: https://www.github.com/AlienWolfX
#include <stdio.h>

int main(){
    int num1, num2;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    // If-Else
    if(num1 > num2){
        printf("%d is larger \n", num1);
    }
    else{
        printf("%d is larger \n", num2);
    }
    if(num1 != num2){
        printf("These numbers are not equal \n");
    }
    else{
        printf("These numbers are equal \n");
    }
}
