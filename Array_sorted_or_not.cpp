int isSorted(int n, vector<int> a) {  
   
    for(int i=1; i<n; i++)
    {
           if(a[i]>=a[i-1])
           {
           }
           else
           {
               return 0;
           }
    }
    return 1;
}

// simple logic of array is sorted or not 
