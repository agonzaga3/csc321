// Alexis Jennar Gonzaga
// CSC 321
// 9-17-24 originally
// Lab#4b

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // 1) Create 4 variables with each one being a different data type.
  int x = 0;
  double y = 0.0;
  char c = 'a';
  float z = 0.0;

  // 2) Ask the user to input a value corresponding to that data type.
  printf("Enter an integer: ");
  scanf("%d", &x);

  printf("Enter a double: ");
  scanf("%lf", &y);

  printf("Enter a character: ");
  scanf(" %c", &c);

  printf("Enter a float: ");
  scanf("%f", &z);

  // 3) Compare the user's input with another value using a conditional
  // statement and display the result Given by Garrett, 3.1 if x > 1 say integer
  // variable is greater than 1 1st data type
  if (x > 5) {
    printf("You input a number larger than 5 \n");
  } else if (x == 5) {
    printf("Your input 5 \n");
  } else {
    printf("You input a number less than 5 \n");
  }

  // Comparing the double to 2.22 , 2nd data type
  if (y == 2.22) {
    printf("The double is equal to 2.22.\n");
  } else {
    printf("The double is not equal to 2.22.\n");
  }

  // 3.2 "if c != 'a' say character variable does not equal the letter a." , 3rd
  // data type
  if (c != 'a') {
    printf("The character does not equal the letter 'a'.\n");
  } else {
    printf("The character equals the letter 'a'.\n");
  }

  // Comparing the float to 33.0, 4th data type
  if (z < 33.0f) {
    printf("The float is less than 33.0.\n");
  } else if (z == 33.0f) {
    printf("Your float equals 33.0 \n");
  } else {
    printf("The float is larger than 33.0.\n");
  }

  return EXIT_SUCCESS;
}

