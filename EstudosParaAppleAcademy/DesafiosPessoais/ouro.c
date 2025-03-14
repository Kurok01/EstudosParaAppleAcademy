#include <stdio.h>
//  x, y  x, y  x, y    x, y    x, y    x,  y   x, y    x, y    x , y   x,  y   x, y   x,  y    x,  y
// (0,0) (1,0) (1, 1) (-1, 1) (-1, -1) (2, -1) (2, 2) (-2, 2) (-2, -2) (3, -2) (3, 3) (-3, 3) (-3, -3)
//   0     1     2       3        4       5       6      7       8        9    10      11       12
int main () {
	
	int i, x = 0, y = 0, aux = 0;
	
	for (i = 0; i < 1000; i++) {
		
		printf ("(%d, %d)\n", x, y);
		
		if (i % 2 == 0) {
			
			x *= -1;
		}
		
		if (i % 4 == 0) {
			
			x += 1;
		   }
		
		if (i % 2 != 0) {
			
			y *= -1;
		}
		
		if ((i-1) % 4 == 0) {
			
			y += 1;
		}
	}
	
	return 0;
}
