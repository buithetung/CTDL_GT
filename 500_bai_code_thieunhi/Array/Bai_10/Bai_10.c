#include <stdio.h>
// Ham sort
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

int main() {
    int n,m;
    printf("Moi ban nhap lan luot kich thuoc 2 mang: ");
    scanf("%d %d",&n,&m);
    int array_n[n];
    int array_m[m];
    printf("Nhap lan luot cac phan tu cua mang 1: ");
    for(int i=0;i<n;i++){
        scanf("%d",&array_n[i]);
    }
    printf("Nhap lan luot cac phan tu cua mang 2: ");
    // Nhap phan tu mang 2
    for(int j=0;j<m;j++){
        scanf("%d",&array_m[j]);
    }
    // Sap xep lai cac phan tu
    sort(array_n,n);
    sort(array_m,m);
    // So sanh va sap xep
    for(int k=0;k<n;k++){
        if(array_n[k] > array_m[0]){
            // Doi cho neu lon hon
            int c = array_n[k];
            array_n[k] = array_m[0];
            array_m[0] = c;
        }
        sort(array_m,m);
    }
    // In ra mang moi
    printf("Mang dau tien la: ");
    for(int p=0;p<n;p++){
        printf("%d ",array_n[p]);
    }
    printf("\nMang thu hai la: ");
    for(int q=0;q<m;q++){
        printf("%d ",array_m[q]);
    }
    return 0;
}