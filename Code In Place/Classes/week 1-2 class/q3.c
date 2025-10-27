#include <stdio.h>
int globalCounter = 0; // Exists everywhere
int main() {
globalCounter = 5; // Can use global variable
printf("Counter: %d"
, globalCounter);
return 0;
}
