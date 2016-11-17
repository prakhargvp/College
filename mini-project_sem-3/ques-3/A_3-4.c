#include<stdio.h>
int inttoarr(int,int[]);
int check(int[],int);
int SOP(int[],int);
int maxDiff(int[],int);
int main(){
	int T,num,i,arr[20],len;
	FILE *fin,*fout;
	fin = fopen("input.txt","r");
	fout = fopen("output.txt","w");
	fscanf(fin,"%d",&T);		
	for(i=0;i<T;i++){
		fscanf(fin,"%d",&num);
		len = inttoarr(num,arr);
		if(check(arr,len)==1){	
			fprintf(fout,"%d,",maxDiff(arr,len));	
			fprintf(fout,"%d\n",SOP(arr,len));	
		}else{
			fprintf(fout,"NA\n");	
		}
	}
	fclose(fin);
	fclose(fout);
return 0;
}
int inttoarr(int num,int arr[]){
	int i=0;
	while(num>0)
	{
		arr[i++] = num%10;
		num /= 10;
	}
return i;
}
int check(int arr[],int len){
	int i;
	for(i=0;i<len-1;i++){
		if(arr[i]>=arr[i+1]){
		}else{
			return 0;
		}
	}
return 1;
}
int SOP(int arr[],int len){
	int i,sum=0;
	for(i=0;i<len;i++){
		sum += arr[i];
	}
return sum;
}
int maxDiff(int arr[],int len){
	int i,diff=0,maxdiff=0;
	for(i=0;i<len-1;i++){
		diff = arr[i]-arr[i+1];
		if( diff > maxdiff){
			maxdiff = diff; 
		}
	}
return maxdiff;
}
