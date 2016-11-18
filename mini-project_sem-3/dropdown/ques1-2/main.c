#include"header.h"

int main()
{
	int ch;

	do{
		printf("Enter Choice (1 - ques1 , 2 - ques2 , 0 -Exit) : ");
		scanf(" %d",&ch);	
		if(ch==1){
			ques1("input.txt","output.txt");		
			printf("Output is generated in output.txt\n");
		}else if(ch==2){
			ques2("input1.txt","output1.txt");
			printf("Output is generated in output1.txt\n");
		}
	}while(ch!=0);
return 0;
}
