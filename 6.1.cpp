#include<stdio.h>

int main(){
	int a,b,c,d,e,tong;
	printf("moi ban nhap vao so nguyen thu nhat ");
	scanf("%d",&a);
	printf("moi ban nhap vao so nguyen thu hai ");
	scanf("%d",&b);
	printf("moi ban nhap vao so nguyen thu ba ");
	scanf("%d",&c);
	printf("moi ban nhap vao so nguyen thu tu ");
	scanf("%d",&d);
	printf("moi ban nhap vao so nguyen thu nam ");
	scanf("%d",&e);
    if(a%2==1){
    	tong+=a;
	}
	if(b%2==1){
		tong+=b;
	}
	if(c%2==1){
		tong+=c;
	}
	if(d%2==1){
		tong+=d;
	}
	if(e%2==1){
		tong+=e;
	}
	printf("%d",tong);
	
	return 0;

}
