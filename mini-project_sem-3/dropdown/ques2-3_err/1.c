#include<stdio.h>
#include<malloc.h>
#include<string.h>
int ques1(){
	int *arr;
	long int i,T,N,M,pnum;	
	float prob;
	arr = (int*)malloc(PRIME_MAX*sizeof(int));	
	memset(arr,0,PRIME_MAX*sizeof(int));
	primeNo(arr);
	scan("%ld",&T);
	for(i=0;i<T;i++){
		scan("%ld",&N);
		scan("%ld",&M);
		pnum = arr[M]-arr[N];
		prob = (float)pnum/(M-N+1);
		printf("%.6f\n",prob);
	}
return 0;
}
