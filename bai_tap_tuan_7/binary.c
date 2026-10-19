#include<stdio.h>
//Ham sap xep mang A
void sort(int array[], int n){
    for(int i=0;i<n;i++){
        int min = array[i];
        for(int j=i+1;j<n;j++){
            if(array[j] < min){
                min = array[j];
                array[j] = array[i];
                array[i] = min;
            }
        }
    }
}

// Ham tim kiem nhi phan
int binary(int array[], int first, int last, int k){
    if(first <= last){
        int m = (first+last)/2;
        if(k > array[m]) {
            int first_new = m + 1;
            return binary(array,first_new,last,k);
        } else if (k < array[m]){
            int last_new = m - 1;
            return binary(array,first,last_new,k);
        } else {
            return m;
        }
    }
    return -1 ;
}
int main() {
    int n;
    printf("Moi ban nhap so luong phan tu: ");
    scanf("%d",&n);
    int array[n];
    printf("Moi ban nhap lan luot cac phan tu cua mang: ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    sort(array,n);
    printf("Moi ban nhap phan tu ban muon tim kiem: ");
    int k;
    scanf("%d",&k);
    int index = binary(array,0,n-1,k);
    if(index == -1){
        printf("Phan tu nay khong ton tai trong mang.");
    } else {
    printf("Tri so cua phan tu do la: %d",index);
    }
    return 0;
}