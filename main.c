#include <stdio.h>

int sumArray(int i){
	int sum=1;
	while(i!=1){
		if(i%2==1){
			i=3*i+1;
			sum++;
		}
		else{
			i=i/2;
			sum++;
		}
	}
	return sum;
}
int main(void)
{
	int start=0, end=0;
	scanf("%d %d", &start , &end );
	

	int i,            max=0;
	for(i=start;i<=end;i++){
		int temp=sumArray(i);
		if(temp>max)max=temp;
	}
	printf("%d %d %d\n",start,end,max);
	
	return 0;
}
