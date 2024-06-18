void merge(int arr[], int l, int m, int r)
    {int right=m+1,left=l;
        int v[r-l+1];
        int k=0;
         while((left<=m)&&(right<=r)){
             if(arr[left]<=arr[right]){
                 v[k]=arr[left];
                 left++;
             }
             else{
                 v[k]=arr[right];
                 right++;
             }
             k++;
         }
         while(left<=m){
             v[k]=arr[left];
             left++;
             k++;
         }
         while(right<=r){
             v[k]=arr[right];
             right++;
             k++;
         }
         for(int i=l;i<=r;i++){
             arr[i]=v[i-l];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r){
            return;
        }
        int m =(l+r)/2;
       mergeSort(arr,l,m);
       mergeSort(arr,m+1,r);
       merge(arr,l,m,r);
    }