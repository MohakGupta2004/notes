Insertionsort(int arr, int size):
    for j in size:
        i = j-1;
        key = j
        while(i>=0 && arr[i]>key):
            arr[i+1] = arr[i]
            i--;
        
        arr[i+1] = key;
