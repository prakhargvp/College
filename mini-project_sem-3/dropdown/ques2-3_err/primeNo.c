int primeNo(int arr[]){
        long int i,j,flag=0,count=0;
        for(i=2;i<=PRIME_MAX;i++){
                if(arr[i]==0){
                        for(j=i*2;j<=PRIME_MAX;j=j+i){
                                arr[j] = 1;
                        }
                        if(arr[i]==0){
                                count++;
                        }
                }
                arr[i] = count;
        }
return count;
}
