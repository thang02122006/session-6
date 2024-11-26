#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;
    printf("Nhap so a: ");
    scanf("%f", &a);
    printf("Nhap so b: ");
    scanf("%f", &b);
  printf("Nhap so c: ");
    scanf("%f", &c);
    if(a == 0) {
        if(b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem\n");
            }
			 else {
                printf("Phuong trinh vo nghiem\n");
            }
        }
		 else {
            printf("nPhuong trinh có nghiem x = %0.2f\n",-c/b);
        }
    } 
	else {
        delta =(b*b - 4*a*c)/2;
        if(delta > 0) {
            x1 = (-b+delta)/(2*a);
            x2 = (-b-delta)/(2*a);
            printf("phuong trinh co 2 nghiem\n");
            printf( "x1 = %0.2f\n",x1);
            printf(" x2 = %0.2f\n",x2);
        }
		 else if ( delta == 0) {
            printf("Phuong trinh có nghiem kep: x1 = x2 = %0.2f\n",-b/2*a);
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    }

    return 0;
}
