#include <stdio.h>

#include <stdlib.h>

int main() {
   int n, i;
   int * a;
   int count = 0;
   int lastDigit;
   printf("Enter leght of array : ");
   scanf("%d", & n);
   if (n <= 0) {
      exit(1);
   }
   a = (int * ) malloc(n * sizeof(int));
   FILE * myFile = fopen("test.txt", "r");
   for (i = 0; i < n; i++) {
      fscanf(myFile, "%d,", & a[i]);
   }
   printf("Array from text file: ");
   for (i = 0; i < n; i++) {
      printf("%d ", a[i]);
   }
   printf("\nSize of a provided by malloc: %i\n", n * sizeof(int));
   for (i = 0; i < n; i++) {
      if (a[i] % 10 != 0) {
         lastDigit = a[i] % 10;
         if (lastDigit % 2 != 0 && a[i] % 3 == 0) {
            printf("\nFound num:%i ", a[i]);
            for (int j = i; j < n - 1; j++) {
               a[j] = a[j + 1];
            }
            count++;
         }
      }
   }
   printf("\n");
   if (count > 0) {
      n -= count;
      a = realloc(a, n * sizeof(int));
      printf("\nSize of a after realloc: %i\n", n * sizeof(int));
      printf("Array after formatting: ");
      for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
        }
   }

   fclose(myFile);
   myFile = fopen("test.txt", "w");
   for (i = 0; i < n; i++) {
      fprintf(myFile, "%d,", a[i]);
   }
   fclose(myFile);
   free(a);
   printf("\nFile updated \n");
   getchar();
   getchar();
   getchar();
}