#include<stdio.h>
#include<malloc.h>
int input(FILE *);
void output(FILE *,int);
int main(){
	int T,N,P,temp,count,i,j;
	FILE *fin,*fout;
	// Input
	fin = fopen("input.txt","r",stdin);
	fout = fopen("output.txt","w",stdout);
	if(fin==NULL || fout==NULL){
		printf("file not found");
		return 0;
	}
	fscanf(fin,"%d",&T);
	for(i=0;i<T;i++){
		output(fout,input(fin));
	}
	fclose(fin);
	fclose(fout);
return 0;
}
int input(FILE *fin){
	int N,P,j,count,temp;
	fscanf(fin,"%d%d",&N,&P);
	count=0;
	for(j=0;j<N;j++){
		fscanf(fin,"%d",&temp);
		if(temp<=0){
			count++;
		}
	}
	if(count>=P){
		return 1;
	}else{
		return 0;
	}
}
void output(FILE *fout,int res){
	if(res==1){
		fprintf(fout,"ON\n");
	}else{
		fprintf(fout,"OFF\n");
	}
}
