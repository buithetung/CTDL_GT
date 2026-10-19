#include<stdio.h>

void doicho(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm chia mảng (Partition)
int participate(int array[], int left, int right){
    int pivot = left; // Chỉ số của phần tử chốt
    int i = left + 1;
    int j = right;
    
    while(i <= j) {
        // So sánh với array[pivot] và thêm điều kiện i <= right để tránh tràn mảng
        while(i <= right && array[i] <= array[pivot]){
            i++;
        }
        while(j >= left && array[j] > array[pivot]){
            j--;
        }
        
        // Đổi chỗ 2 phần tử nếu i và j chưa vượt qua nhau
        if(i < j) {
            doicho(&array[i], &array[j]);
        }
    }
    doicho(&array[pivot], &array[j]);
    
    return j; 
}

// Hàm đệ quy Quick Sort
void quicksort(int array[], int left, int right){
    // Điều kiện dừng
    if(left >= right ){
        return;
    }
    
    int dem = participate(array, left, right); 
    quicksort(array, left, dem - 1);         
    quicksort(array, dem + 1, right);          
}

int main() {
    int n;
    printf("Moi ban nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int array[n];
    printf("Moi ban nhap cac phan tu cua mang: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("\n");
    quicksort(array, 0, n - 1);
    
    // In mảng sau khi sắp xếp
    printf("Mang sau khi sap xep: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}