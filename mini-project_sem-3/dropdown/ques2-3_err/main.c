#include<stdio.h>
#include "header.h"
int main(int argc,char *argv[]){
	int ch=0,imode,omode;
	FILE *fin=NULL,*fout=NULL;
	char filein[100],fileout[100];
	if(argc > 1){
		strcpy(filein,argv[1]);
		if(fopen(filein,"r")==NULL){
			printf("Invalid Input File\n");
			return 0;
		}else{
			imode=1;
		}
		if(argc > 2){
			strcpy(fileout,argv[2]);
			omode=1;
		}else{
			omode=0;	
		}
		welcome();
	}else{
		welcome();
		printf("Select the Mode : \n");
		do{
			printf("Input Mode (0-Screen , 1-File) : ");
			scan("%d",&imode);
			if(imode==1){
				do{
				printf("Enter File : ");
				scan("%s",filein);
				}while(fopen(filein,"r")==NULL);
			}
		}while(imode!=0 && imode!=1);
		do{
			printf("Output Mode (0-Screen , 1-File) : ");
			scan("%d",&omode);
			if(omode==1){
				printf("Enter File : ");
				scan("%s",fileout);
			}
		}while(omode!=0 && omode!=1);
	}
	printf("Enter the Choice (1-Ques1 , 2-Ques2) : ");
	scan(" %d",&ch);
	if(imode==1){
		fin=freopen(filein,"r",stdin);
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
