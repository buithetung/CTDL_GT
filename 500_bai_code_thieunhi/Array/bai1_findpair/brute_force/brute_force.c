#include<stdio.h>
void brute_force(int array[], int n, int sum){
    int index = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((array[i] + array[j]) == sum ){
                index++;
                printf("Pair found (%d, %d)\n",array[i],array[j]);
                break;
            }
        }
    }
    if(index == 0){
        printf("Not found pair");
    }
}

int main() {
    int n;
    printf("Moi ban nhap so luong phan tu cua mang: ");
    scanf("%d",&n);
    int array[n];
    printf("Moi ban nhap lan luot cac phan tu cua mang: ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int sum;
    printf("Moi ban nhap tong can tim: ");
    scanf("%d",&sum);
    brute_force(array,n,sum);
    return 0;
}