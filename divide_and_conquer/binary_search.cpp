/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*You need to complete this function */
int binary_search(int A[], int left, int right, int k)
{
        if(right < left)
            return -1;
        int mid = (left + right)/2;
        if(k == A[mid])
             return mid;
        else if(k < A[mid])
             return bin_search(A,left,mid-1,k);
        else if(k > A[mid])
            return bin_search(A, mid+1,right,k);
    else    
    return -1;        
    
}