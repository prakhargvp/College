#include<stdio.h>
#include<math.h>
int primeNo(int,int);
int main(){
	int i,T,N,M,pnum;	
	float prob;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d%d",&N,&M);
		pnum = primeNo(N,M);
		prob = (float)pnum/(M-N+1);
		printf("%.2f\n",prob);
	}
return 0;
}
int primeNo(int N,int M){
	int i,j,flag=0,count=0;
	for(i=N;i<=M;i++){
		flag=0;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag=1;
			}
		}	
		if(flag==0 && i>1){
			count++;
		}
	}
return count;
}
