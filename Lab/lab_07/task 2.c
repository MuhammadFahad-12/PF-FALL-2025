#include <stdio.h>
int main() {
 int numbers[5];
 int i;
 // Taking input
 for(i = 0; i < 5; i++) {
 printf("Enter number %d: ", i + 1);
 scanf("%d", &numbers[i]);
 }
 // Printing numbers
 printf("\nYou entered: ");
 for(i = 0; i < 5; i++) {
 printf("%d ", numbers[i]);
 }
 return 0;
}
