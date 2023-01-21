#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "facebook", temp;

    for(int i = 0; i < strlen(str) - 1; i++){
       for(int j = i + 1; j < strlen(str); j++){
            if(str[i] > str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("Result: %s", str);
}
