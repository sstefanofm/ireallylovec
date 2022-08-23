#include <stdio.h>

/* #define 
 * is a directiv that allows the definition of macros in the source code
 * it works before the code compiles
 * defining a macro is faster than declaring a global constant variable
 *
 * everywhere SIZE appears in my program, the preprocessor will replace it with the number 20
 * it's doing simple text replacement
 *
 * the problem is: these are globally defined, if you have another macro in another file with
 *    the same name, the compiler will complain
 *
 * another handy thing about preprocessor macros is that you can define them outside of the
 *    source code when you compile your program -> gcc -D OPTION 20
 */
#define SIZE 20

/* const variables
 * whereas declaring a variable like this will make it to occupy space in memory
 *
 * also it is declaring a type, the compiler knows which type it is
 * so in case you do something strange that doesn't makes sense for ints, the compiler will
 *    complain rather than just sticking a number and hoping for the best
 * it is scope controlled: so if you want to avoid naming conflicts, you can control the scope
 *    of the variable as you need
 */
const int UPPER = 200;

int main()
{
  printf("%2d\n", SIZE);

  /*
  int *p = &UPPER;
  *p = 20;
  */

  printf("%2d\n", UPPER);


  return 0;
}
