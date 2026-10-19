#include<stdio.h>
// Ham tron hai mang 
// A[m],.....A[n] mang 2 A[n+1},.... A[p]
void merge_array(int array[], int m, int n, int p) {
    // Khoi tao 2 bien dem mo
    int i =m, j=n+1;
    // Dieu kien dam bao duyet lan luot 2 mang
    while (i<j && j<=p){
        if(array[i] < array[j]){
            i++;
        } else {
            // Luu phan tu thi j
            int x = array[j];
            // Doi mang sang phai 1
            for(int k=j-1;k>=i;k--){
                array[k+1] = array[k];
            }
            // Chen phan tu vo
            array[i] = x;
            // Tang bien dem
            j++;
            i++;
        }
    }
}
// Ham de quy trong mang
void merge_sort(int array[], int first, int last) {
    if(first >= last){
        return;
    }
    int centre = (first+last)/2;
    merge_sort(array,first,centre);
    merge_sort(array,centre+1,last);
    merge_array(array,first,centre,last);
} 

//Ham main
int main() {
    int n;
    printf("Moi ban nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int array[n];
    printf("Moi ban nhap lan luot cac phan tu cua mang: ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    merge_sort(array,0,n-1);
    // In ra mang
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}