#include<stdio.h>

// Ham sap xep
void sort(int array[],int n){
    for(int i=0;i<n;i++){
        int min = array[i];
        for(int j=i+1;j<n;j++){
            if(array[j] < array[i]){
                min = array[j];
                array[j] = array[i];
                array[i] = min;
            }
        }
    }
}
// Ham thu gon tim kiem bang 2 con tro
void search(int array[],int n, int sum){
    // Su dung 2 index
    int i=0, j=n-1;
    sort(array,n);
    while (i<j){
        int k = array[i] + array[j];
        if(k < sum){
            i++;
        } else if(k > sum){
            j--;
        } else if (k == sum){
            printf("Found pair(%d,%d).\n",array[i],array[j]);
            j--;
        }
    }
}
// Ham main 
int main() {
    int n;
    printf("Moi ban nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int array[n];
    printf("Moi ban nhap lan luot cac phan tu cua mang: ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int sum;
    printf("Nhap tong can tim: ");
    scanf("%d",&sum);
    search(array,n,sum);
    return 0;
}