#include<stdio.h>
#include<malloc.h>
int check(int num){
	while(num>0){
		if(num%10>=(num/10)%10){}	
		else{
			return 0;
		}
		num /=10;
	}
return 1;
}
int SOP(int num){
	int sum=0;
	while(num>0){
		sum += num%10;
		num = num/10;
	}
return sum;
}
int maxDiff(int num){
	int diff=0,maxdiff=0;
	while(num/10>0){
		diff = (num%10) - ((num/10)%100);
		if( diff > maxdiff){
			maxdiff = diff; 
		}
		num = num/10;
	}
return maxdiff;
}
int ques3(){
	int T,*num,i;
	FILE *fin,*fout;
	// Input
	fin = freopen("input1.txt","r",stdin);
	scanf("%d",&T);		
	num = (int*)malloc(T*sizeof(int));
	for(i=0;i<T;i++){
		scanf("%d",&num[i]);
	}
	fclose(fin);
	// output
	fout = freopen("output1.txt","w",stdout);
	for(i=0;i<T;i++){
		if(check(num[i])==1){	
			printf("%d,",maxDiff(num[i]));	
			printf("%d\n",SOP(num[i]));	
		}else{
			printf("NA\n");	
		}
	}
	fclose(fout);
return 0;
}

