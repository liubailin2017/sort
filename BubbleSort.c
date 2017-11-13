int BubbleSort(int array[],int n);

void swap(int *a,int *b){
	int t = *a;
	*a = *b;
	*b= t;
}

int BubbleSort(int array[], int n){
	int flag = 0;
	for(int i = n-1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if( array[j] > array[j+1]){
				swap(array +j,array +j +1);
			}
		}
	}
	
	return -1;
}


