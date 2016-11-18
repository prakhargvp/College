#include"header.h"

int main()
{
	int ch;

		printf("Enter Choice (1 - ques1 , 2 - ques2 ) : ");
		scanf(" %d",&ch);	
		if(ch==1){
			ques1();		
		printf("Check output in output file");
		}else if(ch==2){
			ques3();
		printf("Check output in output file");
		}else{
			printf("Invalid Input");
		}
return 0;
}
