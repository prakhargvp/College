#include<stdio.h>
#include<string.h>
int checkChar(char ch){
    /* Checks if it is an alphabet */
    int count=0;
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        count=1;
    }else if(ch >= '0' && ch <= '9'){
        count=2;
    }else{
        count=0;
    }
   return count;
}
int scan(char fspe[],void *add){
	char temp[120];
	int i,chk,alp,num,spcl,flag;
	do{	
		flag=1;
		alp=num=spcl=0;
		strcpy(temp,"");	
		scanf("%[^\n]",temp);
		for(i=0;i<strlen(temp);i++){
			chk = checkChar(temp[i]);
			if(chk==1){
				alp++;
			}else if(chk==2){
				num++;
			}else{
				spcl++;
			}
		}
		// For intercept access modifiers
		if((alp==0 && spcl==0) && (
		    strstr(fspe,"d")!=NULL || (strstr(fspe,"l")!=NULL && strstr(fspe,"u")!=NULL) || 
		    strstr(fspe,"%u")!=NULL)
		   ){
			*(int*)add = atoi(temp);
		}else if(strlen(temp)==1 && strstr(fspe,"%c")!=NULL){
			*(char*)add = temp[0];
		}else if(strstr(fspe,"%s")!=NULL){
			strcpy((char*)add,temp);
		}else{
			flag=0;
			printf("Alphabets : %d ; Digits : %d ; Special Characters : %d \n",alp,num,spcl);
			printf("Re-Enter Value : ");
		}
		getchar();
	}while(strlen(temp)==0 || flag==0);
return 0;
}
/*
int main(){
	int T;
	char ch , str[40];
	printf("Enter test cases : ");
	scan("%d",&T);
	printf("Enter name : ");
	scan("%s",str);
	printf("Enter character : ");
	scan("%c",&ch);

	printf("Test case value : %d\n",T);
	printf("Name : %s\n",str);
	printf("Character : %c\n",ch);
return 0;
}
*/
