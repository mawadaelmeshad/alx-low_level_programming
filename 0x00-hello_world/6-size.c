#include <stdio.h>
int main(void){
	char c;
	int num;
	long int z;
	long long int x;
	float m;
	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(num));
	printf("Size of a long int: %d byte(s)\n", sizeof(z));
	printf("Size of a long long int: %d byte(s)\n", sizeof(x));
	printf("Size of a float: %d byte(s)\n", sizeof(m));
	return (0);
}
