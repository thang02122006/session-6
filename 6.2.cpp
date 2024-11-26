#include<stdio.h>

int main(){
	int a,b,c,d,e,le;
	int chan=0;
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
	if(a%2==0){
        ++chan;
	}
	if(b%2==0){
		++chan;
	}
	if(c%2==0){
		++chan;
	}
	if(d%2==0){
	   ++chan;
	}
	if(e%2==0){
	   ++chan;
	}
	le=5-chan;
	printf("so chan la %d\nso le la %d",chan,le);
	
	return 0;
}

