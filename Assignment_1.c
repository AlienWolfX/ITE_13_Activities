// Allen Gabrielle S. Cruiz
// Github: https://www.github.com/AlienWolfX
#include <stdio.h>

int main(){
    //intended output --> 2A2BC3D3A7Z4E2R5V
    char letters[]="AABBCDDDAAAZZZZZZZEEEERRVVVVV", cur_str = letters[0];
    int i=1, add=1;

    //getting the size or length of array
    int size = sizeof(letters)/sizeof(letters[0]);

    //start writing your code here
    for(i; letters[i] != '\0';i++){
        if(letters[i] == cur_str){
            add++;
        }
        else if(add == 1){ // Displaying C instead of 1C as per intended output.
            printf("%c", cur_str);
            cur_str = letters[i];
        }
        else{
            printf("%d%c", add, cur_str);
            cur_str = letters[i];
            add = 1;
        }
    }
    printf("%d%c",add,cur_str);
    return 0;
}
