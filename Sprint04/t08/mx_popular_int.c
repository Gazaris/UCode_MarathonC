int mx_popular_int(const int*, int);

int mx_popular_int(const int *arr, int size)
{
	if(size != 1)
	{
		int mci = 0, mcsum = 0, sum = 0;

		for(int j = 0; j < size; j++)
		{
			if(arr[0] == arr[j])
				mcsum++;
		}

		for(int i = 1; i < size; i++)
		{
			for(int j = 0; j < size; j++)
			{
				if(arr[i] == arr[j])
				sum++;
			}
			if(sum > mcsum)
			{
				mci = i;
				mcsum = sum;
			}
			sum = 0;
		}

		return arr[mci];
	}
	else return arr[0];

	return 0;
}
