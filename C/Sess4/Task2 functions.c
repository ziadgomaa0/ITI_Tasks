#include<stdio.h>



void add(int operand1, int operand2) {
  int result = operand1 + operand2;
  printf("The sum is %d.\n", result);
}

void subtract(int operand1, int operand2) {
  int result = operand1 - operand2;
  printf("The difference is %d.\n", result);
}

void multiply(int operand1, int operand2) {
  int result = operand1 * operand2;
  printf("The product is %d.\n", result);
}

void divide(int operand1, int operand2) {
  int result = operand1 / operand2;
  printf("The quotient is %d.\n", result);
}

void and(int operand1, int operand2) {
  int result = operand1 & operand2;
  printf("The result is %d.\n", result);
}

void or(int operand1, int operand2) {
  int result = operand1 | operand2;
  printf("The result is %d.\n", result);
}

void not(int operand1) {
  int result = ~operand1;
  printf("The result is %d.\n", result);
}

void xor(int operand1, int operand2) {
  int result = operand1 ^ operand2;
  printf("The result is %d.\n", result);
}

void reminder(int operand1, int operand2) {
  int result = operand1 % operand2;
  printf("The reminder is %d.\n", result);
}

void increment(int operand1) {
  operand1++;
  printf("The number is now %d.\n", operand1);
}

void decrement(int operand1) {
  operand1--;
  printf("The number is now %d.\n", operand1);
}
int main() {
 int operation, operand1, operand2;

  
  printf("Enter the operation ID: ");
  scanf("%d", &operation);

  
  switch (operation) {
  case 1:
    
    printf("Enter the first number: ");
    scanf("%d", &operand1);
    printf("Enter the second number: ");
    scanf("%d", &operand2);
    add(operand1, operand2);
    break;
  case 2:
    
    printf("Enter the first number: ");
    scanf("%d", &operand1);
    printf("Enter the second number: ");
    scanf("%d", &operand2);
    subtract(operand1, operand2);
    break;
  case 3:
    
    printf("Enter the first number: ");
    scanf("%d", &operand1);
    printf("Enter the second number: ");
    scanf("%d", &operand2);
    multiply(operand1, operand2);
    break;
  case 4:
 
    printf("Enter the first number: ");
    scanf("%d", &operand1);
    printf("Enter the second number: ");
    scanf("%d", &operand2);
    divide(operand1, operand2);
    break;
  case 5:
    
    printf("Enter the first number: ");
    scanf("%d", &operand1);
    printf("Enter the second number: ");
    scanf("%d", &operand2);
    and(operand1, operand2);
    break;
  case 6:
    
    printf("Enter the first number: ");
    scanf("%d", &operand1);
    printf("Enter the second number: ");
    scanf("%d", &operand2);
    or(operand1, operand2);
    break;
  case 7:
    
    not(operand1);
    break;
  case 8:
    
    printf("Enter the first number: ");
    scanf("%d", &operand1);
    printf("Enter the second number: ");
    scanf("%d", &operand2);
    xor(operand1, operand2);
    break;
  case 9:
    
    printf("Enter the first number: ");
    scanf("%d", &operand1);
    printf("Enter the second number: ");
    scanf("%d", &operand2);
    reminder(operand1, operand2);
    break;
  case 10:
   
    printf("Enter the number: ");
    scanf("%d", &operand1);
    increment(operand1);
    break;
  case 11:
    
    printf("Enter the number: ");
    scanf("%d", &operand1);
    decrement(operand1);
    break;
  default:
    printf("Invalid operation ID.");
    break;
  }

  return 0;

}