public int minimum_swap(vector<int>& arr){
    int n = arr.size();
    int max_ones = 0, no_of_ones = 0, k, count_ones;
    for(int i=0;i<n;i++){
        if(arr[i] == 1)
            no_of_ones++;
    }
    k = no_of_ones;
    for(int i=0;i<k;i++){
        if(arr[i] == 1)
            count_ones++;
    }
    max_ones = count_ones;
    for(int i=k;i<n;i++){
        if(arr[i-k] == 1)
            count_ones--;
        if(arr[i] == 1)
            count_ones++;
        if(max_ones < count_ones)
            max_ones = count_ones;
    }
    return no_of_ones - max_ones;
}