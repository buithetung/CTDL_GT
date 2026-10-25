#include<stdio.h>
// Ham check

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d",&n);
    int array[n];
    printf("Nhap lan luot cac phan tu cua mang: ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    // Mang de dem index 
    int index[n];
    // Gan cac phan tu - cho cac so xuat hien
    for(int i=0;i<n;i++){
        index[array[i]] = -1;
    }
    // Cap nhat trong so
    for(int i=0;i<n;i++){
        index[array[i]]++;
        if(index[array[i]] > 0){
            printf("The duplicate element is %d",array[i]);
        }
    }


    return 0;
}