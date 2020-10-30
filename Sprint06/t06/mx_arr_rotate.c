void mx_arr_rotate(int *arr, int size, int shift)
{
    if(shift == 0) return;
    if(shift < 0)
    {   
        shift = -shift;
        //Rotate the given array by n times toward left    
        for(int i = 0; i < shift; i++)
        {    
            int j, first;    
            //Stores the first element of the array    
            first = arr[0];    
            
            for(j = 0; j < size-1; j++)
            {    
                //Shift element of array by one    
                arr[j] = arr[j+1];    
            }    
            //First element of array will be added to the end    
            arr[j] = first;    
        }  
    }
    else
    {
        //Rotate the given array by n times toward right    
        for(int i = 0; i < shift; i++)
        {    
            int j, last;    
            //Stores the last element of the array    
            last = arr[size-1];    
            
            for(j = size-1; j > 0; j--){    
                //Shift element of array by one    
                arr[j] = arr[j-1];    
            }    
            //Last element of array will be added to the start of array.    
            arr[0] = last;    
        }    
    }
}
