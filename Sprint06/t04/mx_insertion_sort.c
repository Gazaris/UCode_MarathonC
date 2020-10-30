int mx_strlen(const char *);

int mx_insertion_sort(char**, int);

int mx_insertion_sort(char **arr, int size)
{
    int counter = 0;
    char *temp;
    int j;
    for (int i = 1; i < size; i++) 
    { 
        temp = arr[i]; 

        j = i - 1; 
        while ((j >= 0)&&(mx_strlen(temp) < mx_strlen(arr[j]))) 
        { 
            arr[j+1] = arr[j]; 
            j--; 
            counter++;
        } 
        arr[j+1] = temp; 
    } 
    return counter;
}
