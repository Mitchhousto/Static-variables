#include <stdio.h>

  // Takes no arguments, so void argument list
 // Returns an int equal to the number of times it has been called
 int counter(void);

 int main() 
 {
 // Call 5 times just to test its operation
    printf("%d\n", counter() );
    printf("%d\n", counter() );
    printf("%d\n", counter() );
    printf("%d\n", counter() );
    printf("%d\n", counter() );
 }

 // Takes no arguments, so void argument list
 // Returns an int equal to the number of times it has been called
 int counter(void) {
 // Declaration of x initialises it to zero on first call only
    static int x = 0;
 // Increment x. Initialisation is only done once
    x = x + 1;
    return x;
 }