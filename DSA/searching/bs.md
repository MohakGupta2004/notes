BS ALGO:
while(start<end):
    mid = start + (end-start)/2
    if(arr[mid] == key)  
        return mid; 

    else if(arr[mid]>key){
        end = mid-1;
    }
    else if(arr[mid]<key){
        start = mid+1;
    }
