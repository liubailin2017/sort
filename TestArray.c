#include<stdio.h>
#include"BubbleSort.c"
#include"QuickSort.c"
#include"InsertSort.c"
int Resouce[] = {10,9,8,7,6,5,4,3,2,1,};
int N = 10; 

int main()
{
	printf("%d\n",BubbleSort(Resouce,10));
	for(int i = 0; i < N; i++){
		printf("%d,",Resouce[i]);
	}
	return 0;
}
