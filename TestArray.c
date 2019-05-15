#include<stdio.h>
#include"BubbleSort.c"
#include"QuickSort.c"
#include"InsertSort.c"
int Resouce[] = {13,12,1,100,99,101,10,123,1,99};
int N = 10; 

int main()
{
	printf("%d\n",InsertSort(Resouce,10));
	for(int i = 0; i < N; i++){
		printf("%d,",Resouce[i]);
	}
	return 0;
}
