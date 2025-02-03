#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x; 
  /* Use the pointer safely */
  *ptr = 20; 
  printf("%d\n", x); 
  return 0;
}

/* Additional safety checks or more robust pointer handling can be added here, depending on the context. For example, dynamic memory allocation should be followed by proper memory deallocation using free() to prevent memory leaks.*/