#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define MAX 10000000
int primeNo(long int,long int,int[]);
int main(){
	int *arr;
	long int i,T,N,M,pnum;	
	float prob;
	arr = (int*)malloc(MAX*sizeof(int));	
	memset(arr,0,MAX*sizeof(int));
	primeNo(N,M,arr);
	scanf("%ld",&T);
	for(i=0;i<T;i++){
		scanf("%ld%ld",&N,&M);
		pnum = arr[M]-arr[N];
		prob = (float)pnum/(M-N+1);
		printf("%.2f\n",prob);
	}
return 0;
}
int primeNo(long int N,long int M,int arr[]){
	long int i,j,flag=0,count=0;
	for(i=2;i<=MAX;i++){
		if(arr[i]==0){
			for(j=i*2;j<=MAX;j=j+i){
				arr[j] = 1;
			}
			if(arr[i]==0){
				count++;
			}
		}
		arr[i] = count;
//		printf("%ld:%ld:%d\n",i,count,arr[i]);
	}
return count;
}
