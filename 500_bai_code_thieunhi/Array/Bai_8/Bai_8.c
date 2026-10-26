#include<stdio.h>
// Dem so 0
int zero(int array[],int first, int last){
    int index=0;
    for(int i=first;i<=last;i++){
        if(array[i] == 0){
            index++;
        }
    }
    return index;
}
// Dem so 1
int number(int array[],int first, int last){
    int index = 0;
    for(int i=first;i<=last;i++){
        if(array[i] == 1){
            index++;
        }
    }
    return index;
}
// Kiem tra mang
bool check_array(int array[], int first, int last){
    int number_0 = zero(array,first,last);
    int number_1 = number(array,first,last);
    if(number_1 == number_0){
        return true;
    }
    return false;
}

int main() {
    int n;
    printf("Moi ban so luong phan tu can thiet: ");
    scanf("%d",&n);
    int array[n];
    printf("Nhap lan luot cac phan tu cua mang: ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    // Kiem tra kich thuoc mang lon nhat
    int k = n;
    while(k>=1){
        int index = 0;
        for(int i=0;(i+k-1)<n;i++){
            int first = i;
            int last = i+k-1;
            int check=check_array(array,first,last);
            if(check == 1){
                index++;
                printf("Largest subarray is ( ");
                for(int j=first;j<last;j++){
                    printf("%d, ",array[j]);
                }
                printf("%d )\n",array[last]);
            }
        }
        // Kiem tra da tim thay chua
        if(index != 0) {
            return 0;
        }
        k--;
    }
    return 0;
}