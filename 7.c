/*
Ken Sipprell
BCSA 3100
2/18/2020
*/
#include <stdio.h>

void main()
{
	int count = 0;
	int c;
	int array[10];

	c = getchar();
	while( c != EOF && count < 10) {
		
		for(count=0;count<10;count++){
			array[count] = c;
			c = getchar();
		}
	}

	int c2 = 0;

	for(c2=0;c2<count;c2++){
		printf("The value of array position %d as a character is %c and is %d as a number\n", c2,array[c2],array[c2]);

	}

}
