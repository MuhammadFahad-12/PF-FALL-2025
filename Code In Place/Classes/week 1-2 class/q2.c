#include <stdio.h>
int main() {
int localAge = 20; // Only exists inside main()
printf("Age: %d"
, localAge);
return 0;
}
// localAge dies here-cannot use outside main()
