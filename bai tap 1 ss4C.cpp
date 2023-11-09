#include <stdio.h>

int main() {
	int n;
	float i = n%5;
	printf("nhap so nguyen n : ");
	scanf("%d", &n);
	if(n%5 == 0){
		printf("%d la so chia het cho 5" , n);
	}else{
		printf("%f" ,i);
	}

	if(n % 3 == 0 && n % 5 == 0){
		printf("%d chia het cho 3 va 5" , n);
	}	if(n % 3 == 0){
		if( n % 5 ==0){
			printf("%d" , n);}
}
}
