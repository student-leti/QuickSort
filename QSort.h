void Qsort (int array[], int first, int last)
{
	int left, right, cash, point;
	if (first < last) 
	{
		point = array[ (last + first ) / 2 ];
		left = first;
		right = last;
		while  (left <= right)
		{
			while (array[left] < point) left++;
			while (array[right] > point) right--;
			if (left <= right)
			{
				cash = array[left];
				array[left] = array[right];
				array[right] = cash;
				left++;
				right--;
			}
		}
		Qsort(array,first, right);
		Qsort(array, left, last);
	}
}
