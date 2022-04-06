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
  printf("Array before formatting: ");
  for (i = 0; i < n; i++) {
    a[i] = rand() % (60 + 1 - (-10)) + (-10);
    printf("%d ", a[i]);
  }
  FILE *myFile = fopen("test.txt","w");
  for (i = 0; i < n; i++) {
    fprintf(myFile,"%d,",a[i]);
  }
  fclose(myFile);
  free(a);
  printf("\nFile created");
  getchar();
  getchar();
  getchar();
}