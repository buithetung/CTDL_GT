#include<stdio.h>

// Doi cho cac phan tu su dung 2 con tro
void sort(int array[], int n){
    // Hai con tro duyet lan luot tu dau ve cuoi 
    int i = 0;
    int j = n-1;
    while (i < j) {
        // Tim phan tu dau tien khac 0
        while(array[i] == 0) {
            i++;
        }
        // Tim phan tu dau tien khac 1
        while(array[j] == 1){
            j--;
        }
        // Doi cho hai phan tu
        int c = array[i];
        array[i] = array[j];
        array[j] = c;
        i++;
        j--;
    }
}

void check(int array[], int n){
    for(int i=0;i<n;i++){
        if(array[i] != 0 && array[i] != 1){
            printf("Arrays error.");
            break;
        }
    }
}



int main() {
    int n;
    printf("Moi ban nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int array[n];
    printf("Moi ban nhap lan luot cac phan tu cua mang: ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("\n");
    // Kiem tra
    check(array,n);
    // Sap xep
    sort(array,n);
    // In ra mang
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}