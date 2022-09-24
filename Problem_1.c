// Allen Gabrielle S. Cruiz
// Github: https://www.github.com/AlienWolfX
#include <stdio.h>

int main(){
    int month, days;

    printf("Enter Month Number(1-12):  ");
    scanf("%d", &month);
    if(month == 1){
        printf("January Has 31 Days");
    }
    else if(month == 2){
        printf("February Has 28 or 29 Days");
    }
    else if(month == 3){
        printf("March Has 31 Days");
    }
    else if(month == 4){
        printf("April Has 30 Days");
    }
    else if(month == 5){
        printf("May Has 31 Days");
    }
    else if(month == 6){
        printf("June Has 30 Days");
    }
    else if(month == 7){
        printf("July Has 31 Days");
    }
    else if(month == 8){
        printf("August Has 31 Days");
    }
    else if(month == 9){
        printf("September Has 30 Days");
    }
    else if(month == 10){
        printf("October Has 31 Days");
    }
    else if(month == 11){
        printf("November Has 30 Days");
    }
    else if(month == 12){
        printf("December Has 31 Days");
    }
    else{
        printf("Month not found");
    }
}
