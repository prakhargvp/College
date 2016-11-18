#include<stdio.h>
#include<math.h>
int primeNo(long int N,long int M){
	long int i,j,flag=0,count=0;
	for(i=N;i<=M;i++){
		flag=0;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}	
		if(flag==0 && i>1){
			count++;
		}
	}
return count;
}
int ques2(char filein[],char fileout[]){
	long int i,T,N,M,pnum;	
	float prob;
	FILE  *fin,*fout;
	fin = fopen(filein,"r");
	fout = fopen(fileout,"w");
	fscanf(fin,"%ld",&T);
	for(i=0;i<T;i++){
		fscanf(fin,"%ld%ld",&N,&M);
		pnum = primeNo(N,M);
		prob = (float)pnum/(M-N+1);
		fprintf(fout,"%.2f\n",prob);
	}
	fclose(fin);
	fclose(fout);
return 0;
}

