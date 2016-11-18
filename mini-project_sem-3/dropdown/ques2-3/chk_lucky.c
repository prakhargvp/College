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
