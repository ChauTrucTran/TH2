#include<stdio.h>
#include<stdlib.h>
#include<typeinfo>
int main(int argc, char** argv){
	char* a[100];
	int n=0;
	for(int i=0;i<argc;i++){
		if((argv[i][0]>='a'&&argv[i][0]<='z')||(argv[i][0]>='A'&&argv[i][0]<='z')){
			continue;
		}
		else{
			a[n++]=argv[i];
		}
	}
	for(int i=1;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(atoi(a[i])>atoi(a[j])){
				char* tmp = a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	
	printf("Day tang ");
	for(int i=1;i<n;i++){
		printf("%s ",a[i]);
	}
	printf("\n");
	return 0;
}
