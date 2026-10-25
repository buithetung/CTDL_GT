#include<stdio.h>
// Tinh tong
int sum(int array[],int first, int last){
    int sum =0;
    for(int i=first;i<=last;i++){
        sum += array[i];
    }
    return sum;
}

int main() {
    int n;
    printf("Moi ban nhap so luong phan tu cua mang:");
    scanf("%d",&n);
    int array[n];
    printf("Nhap lan luot cac phan tu cua mang: ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int host;
    printf("Nhap so can kiem tra: ");
    scanf("%d",&host);
    for(int k=n;k>0;k--){
        for(int i=0;(i+k-1)<n;i++){
            int first = i;
            int last = i + k -1;
            int check = sum(array,first,last);
            if(check == host){
                printf("The longest sumary is ( ");
                for(int j=first;j<last;j++){
                    printf("%d, ",array[j]);
                }
                printf("%d )",array[last]);
                return 0;
            }
        }
    }
    return 0;
}