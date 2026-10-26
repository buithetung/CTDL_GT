#include <stdio.h>
// 1 struct dem so luong phan tu
typedef struct {
    int zero;
    int one;
    int two;
}bien_dem;
// Kiem tra so luong phan tu 

bien_dem check(int array[], int n){
    bien_dem number;
    number.zero = 0;
    number.one = 0;
    number.two = 0;
    for(int i=0;i<n;i++){
        if(array[i] == 0){
            number.zero++;
        } else if(array[i] == 1){
            number.one++;
        } else if(array[i] == 2){
            number.two++;
        } else {
            printf("Error.");
            break;
        }
    }
    return number;
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d",&n);
    int array[n];
    // Nhap cac phan tu cua mang
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    // Tinh so luong cac phan tu 
    bien_dem number = check(array,n);
    int line_1 = number.zero;
    int line_2 = number.zero + number.one;
    // Gan so 0
    for(int m=0;m<line_1;m++){
        array[m]=0;
    }
    // Gan so 1
    for(int j=line_1;j<line_2;j++){
        array[j] = 1;
    }
    // Gan so 2
    for(int k=line_2;k<n;k++){
        array[k] = 2;
    }
    // In lai mang
    printf("( ");
    for(int i=0;i<n-1;i++){
        printf("%d, ",array[i]);
    }
    printf("%d )",array[n-1]);
    return 0;
}
