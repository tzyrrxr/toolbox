#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int statistic[32] = {0};
	int counter = 0;
	char reg[32][10] = {
		"$zero", 	// 0

		"$at",  	// 1

		"$v0", 		// 2
		"$v1", 		// 3

		"$a0",		// 4
		"$a1", 		// 5
		"$a2", 		// 6
		"$a3", 		// 7

		"$t0", 		// 8
		"$t1", 		// 9
		"$t2", 		// 10
		"$t3", 		// 11
		"$t4", 		// 12
		"$t5", 		// 13
		"$t6", 		// 14
		"$t7", 		// 15

		"$s0", 		// 16
		"$s1", 		// 17
		"$s2", 		// 18
		"$s3", 		// 19
		"$s4", 		// 20
		"$s5", 		// 21
		"$s6", 		// 22
		"$s7", 		// 23

		"$t8", 		// 24
		"$t9", 		// 25

		"$k0", 		// 26
		"$k1", 		// 27

		"$gp", 		// 28
		"$sp", 		// 29
		"$fp", 		// 30
		"$ra", 		// 31
	};
	char usage[12][50] ={
		"The constant value 0.", 	//[0]-> 0
		"Reserved for assembly.", 	//[1]-> 1
		"Value for result and expression evaluation.",	//[2]-> 2~3
		"Storages Arguments.", 		//[3] 4~7
		"Storages Temporaries.", 	//[4] 8~15
		"Contents saved for later use.",	//[5] 16~23
		"More Temporaries.", 		//[6] 24~25
		"Deserved by Operating System.", //[7] 26~27
		"Global pointer.",		//[8] 28
		"Stack pointer.", 		//[9] 29
		"Frame pointer.", 		//[10] 30
		"Return address."		//[11] 31

	};
	int index = 0;


	printf("'q' to exit.");

	/* LOOP */
	do{
			// random by time
		srand(time(NULL));
		counter++;
		index = (int)rand()%32;
		printf("Register Number : $%d", index);
		printf(" [counter: %d]", counter);
		if(getchar()!='q')
		printf(" -> %s", reg[index]);
		//if(getchar()!='q')

		if(index==0) {
			printf("-> %s", usage[0]);
		} else if(index==1) {
			printf("-> %s", usage[1]);
		} else if(index>=2 && index<=3) {
			printf("-> %s", usage[2]);
		} else if(index>=4 && index<=7) {
			printf(" -> %s", usage[3]);
		} else if(index>=8 && index<=15) {
			printf(" -> %s", usage[4]);
		} else if(index>=16 && index<=23) {
			printf(" -> %s", usage[5]);
		} else if(index>=24 && index<=25) {
			printf(" -> %s", usage[6]);
		} else if(index>=26 && index<=27) {
			printf(" -> %s", usage[7]);
		} else if(index==28) {
			printf(" -> %s", usage[8]);
		} else if(index==29) {
			printf(" -> %s", usage[9]);
		} else if(index==30) {
			printf(" -> %s", usage[10]);
		} else if(index==31) {
			printf(" -> %s", usage[11]);
		}
		puts("");

	}while(getchar()!='q');
	/* Statistic */
	/*
	for(int i=0; i<10000; i++)
		statistic[rand()%32]++;

	for(int i=0; i<32; i++)
		printf("%d: %d\n", i, statistic[i]);
	*/




}
