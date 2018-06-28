#include <stdio.h>

int main(void) {
	unsigned int a;
	while(scanf("%X", &a) != -1) {
		printf("%c%c", a>>8, a);
	}
	return 0;
}
