#include<stdio.h>
#include<stdlib.h>
#include<typeinfo>
int main(int argc, char** argv){
	if(argc>2){
		printf("Co qua nhieu doi so\n");
	}
	else{
		if(atoi(argv[1])<=0||typeid(argv[1]).name()=="Pc"){
			printf("Doi so khong phai nguyen duong\n");
		}
		else{
			int tong=0;
			for(int i=0;i<=atoi(argv[1]);i++){
				tong+=i;
			}
			printf("S = %d\n",tong);
		}
	}
	return 0;
}
