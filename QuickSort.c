void QuickSort(int array[], int left, int right);

int Division(int array[],int left,int right){
	int base = array[left];
	while(left < right){
		while(left != right && array[right] >= base){
			right --;
		}
		array[left] = array[right];
		
		while(left != right && array[left] <= base){
			left++;
		}
		array[right] = array[left];
	}
	/*此时left 与right应该相等*/
	array[left] = base;
	return left;
}

void QuickSort(int array[],int left, int right){
	int m;
	if(left < right){
		m = Division(array,left,right);
		QuickSort(array,left,m-1);
		QuickSort(array,m+1,right);
	}
}


