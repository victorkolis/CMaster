# CONST & DEFINE

### Const
* Later on implemented in c, **`const`** is a hardened form
of making constants and more secure. Since it does not
allow the programmer redefine the variable. By not allowing
the compiler to complete its task and printing out an error message.

### Define
* **`#define`** indicates that we are dealing with a constant,
however it does not prevent on from redefining a variable.

- Code example:


`#include <stdio.h>`

`int main(void){`

	#define PI 3.1415
	printf("%.2f", PI);
	
	const SHORT_PI = 3.14;
	printf("%.2f", SHORT_PI);
	
}

