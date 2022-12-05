#include <stdio.h>
void swapWithoutPointers(int, int);
void swapWithPointers(int *, int *);

int main(void) {
  int a, b;
  printf("Enter value of A:");
  scanf("%d", &a);
  printf("Enter value of B:");
  scanf("%d", &b);
  printf("*** Result of swap without pointers ***\n");
  swapWithoutPointers(a, b);

  printf("*** Result of swap with pointers ***\n");
  swapWithPointers(&a, &b);
  printf("A:%d\tB:%d\n\n", a, b);
  return 0;
}

void swapWithPointers(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

void swapWithoutPointers(int x, int y) {
  int temp;
  temp = x;
  x = y;
  y = temp;
  printf("A:%d\tB:%d\n\n", x, y);
}