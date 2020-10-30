void mx_sort_arr_int(int*, int);

void mx_sort_arr_int(int *arr, int size)
{
	int ch = 0, tmp;
	do
	{
		ch = 0;
		for(int i = 0; i < size - 1; i++)
		{
			if(arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				ch = 1;
			}
		}
	} while(ch == 1);
}
