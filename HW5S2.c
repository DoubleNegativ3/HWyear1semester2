/*HW#5 Jeison Izquiero*/
#include <stdio.h>

int main() {
  int n, i, factorial = 1;

  printf("Enter an integer (less than 21) or q to quit: ");
  while (scanf("%d", &n) == 1) {//while n is 1
    if (n < 0 || n > 20) {//if n is not what asked
      printf("Invalid input. Enter a number between 0 and 20.\n");
    } else {
      for (i = 1; i <= n; i++) {//factoral math
        factorial *= i;//factoral*i=newi
      }
      printf("%d! = %d\n", n, factorial);//your factoral# is ...
      factorial = 1;
    }

    printf("Enter an integer (less than 21) or q to quit: ");//reset  the cycle
  }

  printf("Hope you had fun!\n");
  return 0;
}
//Enter an integer (less than 21) or q to quit: 19
//19! = 109641728
//Enter an integer (less than 21) or q to quit: 20
//20! = -2102132736
//Enter an integer (less than 21) or q to quit: 21
//Invalid input. Enter a number between 0 and 20.
//Enter an integer (less than 21) or q to quit: 1
//1! = 1
//Enter an integer (less than 21) or q to quit: q
//Hope you had fun!






