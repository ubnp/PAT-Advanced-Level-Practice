#include<stdio.h>

int main() {
	int num,e;
	float temp;
	float k[1001]={0};
	
    // 分别输入两个多项式
	scanf("%d",&num);
	for(int i =0; i<num; i++) {
		scanf("%d %f",&e,&temp);
		k[e] += temp;
	}
	scanf("%d",&num);
	for(int i =0; i<num; i++) {
		scanf("%d %f",&e,&temp);
		k[e] += temp;
	}
	
	// 判断当前多项式的项数
	int cnt = 0;
	for(int i = 0; i <= 1000; i++) {
		if(k[i]){
			cnt ++;
		}
	}
	printf("%d",cnt);
	
		
	for(int j=1000;j>=0;j--){
		if(k[j]){
			printf(" %d %.1f",j,k[j]);		
		}		
	
	}
	return 0;

}
