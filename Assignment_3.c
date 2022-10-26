// MIT Licensed
// Github: https://www.github.com/AlienWolfX
/*
Input: caraga state university
Output: Crg Stt Nvrsty
Input: I am Iron Man
Output: M Rn Mn
*/
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int check_for_vowel(char);

int main() {
  char str[100], str_o[100], str_c[100];
  int i, j = 0;

  printf("Enter String: ");
  scanf("%100[^\n]", str);

  // Loop for checking vowels
  for (i = 0; i <= strlen(str); i++) {
    if (check_for_vowel(str[i]) == 0) {
      str_o[j] = str[i];
      j++;
    }
  }

  // Assigning str_o to str
  str[j] = '\0';
  strcpy(str, str_o);

  // Loop for capitalizing first letters
  for (i = 0; i <= strlen(str); i++) {
    if (i == 0) {
      str[i] = toupper(str[i]);
    } else if (str[i - 1] == ' ') {
      str[i] = toupper(str[i]);
    }
  }
  printf("Result is: %s", str);
}

// Function for checking vowels
int check_for_vowel(char letter) {
  if (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' ||
      letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' ||
      letter == 'u' || letter == 'U')
    return 1;
  return 0;
}
