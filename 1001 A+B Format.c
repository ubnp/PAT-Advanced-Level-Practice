#include<stdio.h>

int main() {
	int a,b;
	int sum =0;
	scanf("%d %d",&a,&b);
	sum=a+b;
	if (sum<0) {
		printf("-");
		sum=-sum;
	}
	if (sum>=1000000) {
		printf("%d,%03d,%03d",sum/1000000,(sum/1000)%1000,sum%1000);
	} else if(sum>=1000) {
		printf("%d,%03d",sum/1000,sum%1000);
	} else {
		printf("%d",sum);
	}
	return 0;
}
