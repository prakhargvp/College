#include<stdio.h>
#include "header.h"
int main(){
	int ch=0,imode,omode;
	FILE *fin=NULL,*fout=NULL;
	char filein[100],fileout[100];
	welcome();
	printf("Select the Mode : \n");
	do{
		printf("Input Mode (0-Screen , 1-File) : ");
		scanf("%d",&imode);
		if(imode==1){
			printf("Enter File : ");
			scanf("%s",filein);
		}
	}while(imode!=0 && imode!=1);
	do{
		printf("Output Mode (0-Screen , 1-File) : ");
		scanf("%d",&omode);
		if(omode==1){
			printf("Enter File : ");
			scanf("%s",fileout);
		}
	}while(omode!=0 && omode!=1);

	printf("Enter the Choice (1-Ques1 , 2-Ques2) : ");
	scanf(" %d",&ch);
	if(imode==1){
		fin=freopen(filein,"r",stdin);
		if(fin==NULL){
			printf("Not a Valid Input FIle\n");
			return 0;
		}
	}
	if(omode==1){
		fout=freopen(fileout,"w",stdout);
	}

	if(ch==1){
		ques1();
	}else if(ch==2){
		ques3();
	}

	if(imode==1){
		fclose(fin);
	}
	if(omode==1){
		fclose(fout);
	}
return 0;
}
