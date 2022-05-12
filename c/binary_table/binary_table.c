#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void d2b(int d) {
	int tmp = d;
	int b[4]={};
	printf("%d", d);
	for(int i=0; d>0; i++) {
		b[i] = d%2;
		d /=2;
	}
	d = tmp;
	switch(d) {
		case 10:
			printf("(A)");
			break;
		case 11:
			printf("(B)");
			break;
		case 12:
			printf("(C)");
			break;
		case 13:
			printf("(D)");
			break;
		case 14:
			printf("(E)");
			break;
		case 15:
			printf("(F)");
			break;
		default:
			printf("(%d)", d);
			break;
	}
	getchar();
	printf("-> ");
	for(int i=4; i>0; i--){
		printf("%d", b[i-1]);
	}
	puts("");
}
int main() {
	int index;
	int counter = 0;
	printf("D(H) -> B\n");
	do {
		counter++;
		srand(time(NULL));
		index = rand()%16;
		printf("Counter %d\n", counter);
		d2b(index);
	} while (getchar()!='q');
	return 0;
}
