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
