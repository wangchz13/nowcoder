class MergeSort {
public:
    int* mergeSort(int* A, int n) {
        merge_sort(A, 0, n-1);
        return A;
    }
    void merge_sort(int *A, int p, int r){
        if(p < r){
            int q = (p+r)/2;
            merge_sort(A, p, q);
            merge_sort(A, q+1, r);
            merge(A, p, q, r);
        }
    }
    void merge(int *A, int p, int q, int r){
        int n1 = q-p+1, n2 = r-q;
        int *L = new int[n1+1];
        int *R = new int[n2+1];
        for(int i = 0; i < n1; i++) L[i] = A[p+i];
        for(int i = 0; i < n2; i++) R[i] = A[q+1+i];
        L[n1] = R[n2] = INT_MAX;
        int li=0,ri=0;
        for(int i = p; i <= r; i++){
            if(R[ri] <= L[li]) A[i] = R[ri++];
            else A[i] = L[li++];
        }
    }
};