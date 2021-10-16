#include<stdio.h>
#include<stdlib.h>
#include<typeinfo>
int main(int argc, char** argv){
	if(argc%2!=0){
		printf("Doi so khong phai so nguyen\n");
	}
	else{
		int tong,n;
		for(int i =atoi(argv[0]); i<atoi(argv[n-1]); i++)
			for(int j=atoi(argv[i+1]);j<atoi(argv[n]); j++){
				if(argv[i] >argv[j])
					tong = atoi(argv[i]);
					argv[i] = argv[j];
					argv[j] = argv[tong];
				}
				printf("S=%d\n",tong);
	}
	return 0;
}
