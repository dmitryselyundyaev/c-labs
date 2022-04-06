#include <stdio.h>

#include <stdlib.h>

int main() {
  int n, i;
  int * a;
  int lastDigit;
  printf("Enter leght of array : ");
  scanf("%d", & n);
  int count = 0;
  if (n <= 0) {
    exit(1);
  }
  a = (int * ) malloc(n * sizeof(int));
  printf("Provided size for a: %i\n", n * sizeof(int));
  printf("Array before formatting:");
  for (i = 0; i < n; i++) {
    a[i] = rand() % (50 + 1 - (-20)) + (-20);
    printf("%d ", a[i]);
  }
  printf("\n");
  printf("Start of array address before formatting:%x\n", &a[0]);
  printf("End of array address before formatting:%x\n", &a[n]);
  for (i = 0; i < n; i++) {
      if ((a[i] % 3 == 0 ) && (a[i] % 10 % 2 != 0)) {
        printf("Found num:%i\n ", a[i]);
        for (int j = i; j < n - 1; j++) {
          a[j] = a[j + 1];
        }
        count++;
    }
  }
  printf("\n");
  if(count > 0){
      n -= count;
      a = realloc(a,n * sizeof(int));
      printf("Size of a after realloc: %i\n", n * sizeof(int));
  }
  printf("Start of array address after formatting:%x\n", &a[0]);
  printf("End of array address after formatting:%x\n", &a[n]);
  printf("Array after formatting:");
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n Number of elements after formatting : %i", n);
  printf("\n Number of deleted elements : %i\n", count);
  free(a);
  getchar();
  getchar();
  getchar();
}