int inttoarr(int num,int arr[]){
	int i=0;
	while(num>0)
	{
		arr[i++] = num%10;
		num /= 10;
	}
return i;
}
