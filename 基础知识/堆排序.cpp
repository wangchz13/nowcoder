class HeapSort {
public:
    int* heapSort(int* A, int n) {
        build_max_heap(A,n);
        int heapsize = n;
        for(int i = n-1; i >= 1; i--){
            swap(A[0], A[i]);
            heapsize--;
            max_heapify(A,0,heapsize);
        }
        return A;
    }
    void max_heapify(int *A, int i,int heapsize){
        int l = 2*i+1,r = 2*i+2,largest;
        if(l < heapsize && A[l] > A[i])
            largest = l;
        else
            largest = i;
        if(r < heapsize && A[r] > A[largest])
            largest = r;
        if(largest != i){
            swap(A[i], A[largest]);
            max_heapify(A,largest,heapsize);
        }
    }
    void build_max_heap(int *A,int n){
        for(int i = n/2; i >= 0; i--)
            max_heapify(A, i, n);
    }
};