
int InsertSort(int array[],int n);

int InsertSort(int array[], int n){
	int t;	
	int c = 0;
	for(int i = 1; i < n; i++) { 
		t = array[i];
		int j;
		for(j = i-1; j >=0; j--){
			c++;
			if( t < array[j])
				array[j+1] = array[j];
			else
				break;
		}
		array[j+1] = t;
	}
	return c;
}


