#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv){
	switch(argv[3][0]){
		case '+':
			add(atoi(argv[1]),atoi(argv[2]));
			break;
		case '-':
			sub(atoi(argv[1]),atoi(argv[2]));
			break;
		default:
			printf("Doi so truyen khong dung\n");
			break;
	}
	return 0;
}
