#include<stdio.h>

void subarrays(int array[], int n){
    for(int i=0;i<n;i++){
        int sum = array[i];
        for(int j=i+1;j<n;j++){
            sum += array[j];
            if(sum == 0){
                printf("( ");
                for(int k=i;k<=j;k++){
                    printf("%d, ", array[k]);
                }
                printf("). \n");
            }
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
    subarrays(array,n);
    return 0;
}