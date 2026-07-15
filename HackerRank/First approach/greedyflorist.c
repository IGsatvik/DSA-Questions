void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int getMinimumCost(int k, int c_count, int* c) {
    int x=0,y=1;
    bubbleSort(c,c_count);
    while(c_count>0){
        for(int i=c_count-1;i>c_count-k-1&&i>=0;i--){
            x+=y*c[i];
        }
        y++;
        c_count=c_count-k;
    }
    return x;
}
