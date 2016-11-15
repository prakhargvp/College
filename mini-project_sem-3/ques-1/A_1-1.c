#include<stdio.h>
int main(){
	int T,N,P,temp,count,i,j;
	FILE *fin,*fout;
	fin = fopen("input.txt","r");
	fout = fopen("output.txt","w");
	if(fin==NULL || fout==NULL){
		printf("file not found");
		return 0;
	}
	fscanf(fin,"%d",&T);
	for(i=0;i<T;i++){
		fscanf(fin,"%d%d",&N,&P);
		count=0;
		for(j=0;j<N;j++){
			fscanf(fin,"%d",&temp);
			if(temp<=0){
				count++;
			}
		}
		if(count>=P){
			fprintf(fout,"ON\n");
		}else{
			fprintf(fout,"OFF\n");
		}
	}
	fclose(fout);
	fclose(fin);
return 0;
}
