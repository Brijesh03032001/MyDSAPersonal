class Solution {
public:
    int merge(vector<int>& arr, int l, int mid, int r)
{  
        // Counting the pairs that are valid
    int inv = 0;
    int m=mid+1;
   for(int n=l;n<=mid;n++){
       while(m<=r && arr[n] > 2LL*arr[m]){
           m++;
       }
       inv+=(m-(mid+1));
   }

        // Full Merge Sort from here
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2]; 
//         Creating the dummy arrays
        
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;
        
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++, i++;
        }
        else
        {
            arr[k] = b[j];
            k++, j++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++, i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++, j++;
    }

    return inv;
}
    
    int mergesort(vector<int>& arr, int l, int r)
{
            if(l>=r){
                return 0;
            }
   
        int mid = (l + r) / 2;
        int inv=0;
        
        inv+= mergesort(arr, l, mid);
        inv += mergesort(arr, mid + 1, r);

        inv += merge(arr, l, mid, r);
    
    return inv;
}
    
    int reversePairs(vector<int>& arr) {
        return  mergesort(arr,0,arr.size()-1);
        
    }
};