#include<stdio.h>
#include<malloc.h>
int main(){
	int T,N,P,temp,count,i,j,*res;
	FILE *fin,*fout;
	// Input
	fin = freopen("input.txt","r",stdin);
	if(fin==NULL){
		printf("file not found");
		return 0;
	}
	scanf("%d",&T);
	res = (int*)malloc(T*sizeof(int));
	for(i=0;i<T;i++){
		scanf("%d%d",&N,&P);
		count=0;
		for(j=0;j<N;j++){
			scanf("%d",&temp);
			if(temp<=0){
				count++;
			}
		}
		if(count>=P){
			res[i]=1;
		}else{
			res[i]=0;
		}
	}
	fclose(fin);
	// Output
	fout = freopen("output.txt","w",stdout);
	for(i=0;i<T;i++){
		if(res[i]==1){
			printf("ON\n");
		}else{
			printf("OFF\n");
		}
	}
	fclose(fout);
return 0;
}
