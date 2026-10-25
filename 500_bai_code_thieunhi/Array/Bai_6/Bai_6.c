#include<stdio.h>
#include<stdbool.h>
// Ham tim max
int max(int array[],int first, int last){
    int max = array[first];
    for(int i=first+1 ;i<=last; i++){
        if(array[i] > max) {
            max = array[i];
        }
    }
    return max;
}
// Ham tim Min
int min(int array[], int first, int last){
    int min = array[first];
    for(int i=first+1 ;i<=last;i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}
// Ham kiem tra lap 
bool check_loop(int array[], int first, int last){
    for(int i=first;i<=last;i++){
        int check = array[i];
        for(int j=i+1;j<=last;j++){
            if(array[j] == check){
                return false;
            }
        }
    }
    return true;
}
// Ham main
int main() {
    int n;
    printf("Moi ban nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int array[n];
    printf("Nhap lan luot cac phan tu cua mang: ");
    // Nhap cac phan tu cua mang
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int quantity = n;
    while(quantity >= 1) {
        int i = 0;
        while(i+quantity-1 <= (n-1)) {
            int first = i;
            int last = i + quantity - 1;
            int check = check_loop(array,first,last);
            // Kiem tra lap
            if(check == 0){
                i++;
                continue;
            }
            // Max, min
            int Max = max(array,first,last);
            int Min = min(array,first,last);
            if((Max-Min+1) == quantity){
                printf("The largest subarray is { ");
                for(int k=first;k<last;k++){
                    printf("%d, ",array[k]);
                }
                printf("%d }",array[last]);
                return 0;
            }
        
        }
        quantity--;
    }
    return 0;
}