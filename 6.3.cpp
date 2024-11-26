#include<stdio.h>

int main(){
	int mk=02122006;
	int number;
	printf("moi ban nhap mat khau la ngay sinh cua TVT gom 8 chu cai: ");
	scanf("%d",&number);
	if(number==mk){
		printf("mat khau chinh sac");
	}
	else{
		printf("sai mat khau");
	}
	
	return 0;
}
