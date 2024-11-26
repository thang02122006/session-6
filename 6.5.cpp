#include<stdio.h>;

int main(){
	int n,t;
	printf("nhap so nam ");
	scanf("%d",&t);
	printf("nhap so thang ");
	scanf("%d",&n);
	switch(n){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("thang %d nam %d co 31 ngay",n,t);
			break;
		case 4: case 6: case 9: case 11:
			printf("thang %d nam %d co 30 ngay",n,t);
			break;
		case 2:
			if(t%4==0 && t%100!=0 || t%400==0){
			printf("thang %d nam %d co 29 ngay",n,t);
			break;
		    }
		    else{
		    printf("thang %d nam %d co 28 ngay",n,t);	
			}
		default:
		printf("khong hop le");	
    }
    
    return 0;
}
