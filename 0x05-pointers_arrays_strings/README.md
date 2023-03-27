                             Pointers and arrays
-------------------------------------------------------------------------------------
----------------------------------Pointers-------------------------------------------
 => Types and memory :

   -char -> 1 byte
   -int -> 4 bytes
   -float -> 4 bytes

To determine the size of those types on your computer, you can use the sizeof operator.
You can use %p to print addresses (the values of pointers) with printf
Storing memory addresses
A pointer is simply the address of a piece of data in memory. 
A pointer variable is a variable that stores the address of that piece of data. 
Like any other variable it needs to be declared. General form is:
var_type *var;

-The * tells that the variable var is a pointer…
-… that points to a var_type.
-The value of var will be a memory address holding a value of type var_type

int main(void)
{
  int n;
  int *p;

  n = 98;
  p = &n;
  printf("Address of 'n': %p\n", &n);
  printf("Value of 'p': %p\n", p);
  return (0);
}
Address of 'n': 0x7ffc6f64b6d4
Value of 'p': 0x7ffc6f64b6d4
p = &n , *p = n

