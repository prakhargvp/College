#include<stdio.h>
#include<malloc.h>
int main(){
	int T,*N,*P,**time,count,i,j;
	FILE *fin,*fout;
	// Input
	fin = freopen("input.txt","r",stdin);
	scanf("%d",&T);
	N = (int*)malloc(T*sizeof(int));
	P = (int*)malloc(T*sizeof(int));
	time = (int**)malloc(T*sizeof(int*));
	for(i=0;i<T;i++){
		scanf("%d%d",&N[i],&P[i]);
		time[i] = (int*)malloc(N[i]*sizeof(int));
		for(j=0;j<N[i];j++){
			scanf("%d",&time[i][j]);
		}
	}		
	fclose(fin);
	// Output
	fout = freopen("output.txt","w",stdout);
	for(i=0;i<T;i++){
		count=0;
		for(j=0;j<N[i];j++){
			if(time[i][j]<=0){
				count++;
			}	
		}
		if(count>=P[i]){
			printf("ON\n");
		}else{
			printf("OFF\n");
		}
	}
	fclose(fout);
return 0;
}
