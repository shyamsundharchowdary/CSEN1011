# include <stdio.h>
int main() {
  char operator;
  int a=14,b=5,result;
  printf("Enter an operator (+ , -, %, *)" );
  scanf("%c", &operator);
  
  switch (operator) {
    case '+': printf("Result is %d", a + b);
              break;
    case '-': printf("Result is %d", a - b);
              break;
    case '*': printf("Result is %d", a * b);
              break;
    case '/': printf("Result is %d", a / b);
              break;
    case '%': printf("Result is %d", a % b);
              break;
    default: printf("Error ! operator is incorrect");
  }

  return 0;
}
