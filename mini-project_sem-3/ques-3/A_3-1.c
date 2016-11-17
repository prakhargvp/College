#include<stdio.h>
int check(int);
int SOP(int);
int maxDiff(int);
int main(){
	int T,num,i;
	FILE *fin,*fout;
	fin = fopen("input.txt","r");
	fout = fopen("output.txt","w");
	fscanf(fin,"%d",&T);		
	for(i=0;i<T;i++){
		fscanf(fin,"%d",&num);
		if(check(num)==1){	
			fprintf(fout,"%d,",maxDiff(num));	
			fprintf(fout,"%d\n",SOP(num));	
		}else{
			fprintf(fout,"NA\n");	
		}
	}
	fclose(fin);
	fclose(fout);
return 0;
}
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
		diff = (num%10) - ((num/10)%10);
		if( diff > maxdiff){
			maxdiff = diff; 
		}
		num = num/10;
	}
return maxdiff;
}
