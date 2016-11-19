#include<stdio.h>
#include<malloc.h>
int ques3(){
	int T,*num,i,arr[20],len;
	// Input
	scanf("%d",&T);		
	num = (int*)malloc(T*sizeof(int));
	for(i=0;i<T;i++){
		scanf("%d",&num[i]);
	}
	// output
	for(i=0;i<T;i++){
		len = inttoarr(num[i],arr);
		if(check(arr,len)==1){	
			printf("%d,",maxDiff(arr,len));	
			printf("%d\n",SOP(arr,len));	
		}else{
			printf("NA\n");	
		}
	}
return 0;
}

