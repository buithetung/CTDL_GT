#include<stdio.h>
// Ham dem so 0
int number(int array[], int n){
    int index = 0;
    for(int i=0;i<n;i++){
        if(array[i] == 0){
            index++;
        }
    }
    return index;
}

// Ham sap xep
void sort(int array[], int n){
    for(int i=0;i<n;i++){
        int min = array[i];
        for(int j=i+1;j<n;j++){
            if(array[j] < min){
                min = array[j];
                array[j] = array[i];
                array[i] = min;
            }
        }
    }
}
void merge(int array_x[], int array_y[], int m, int n){
    int x = number(array_x,m); // Chi so dem phan tu khac 0 dau tien
    int y = 0; //Chi so dem phan tu dau tien cua mang y
    int index = 0; //Chi so dem phan tu bang 0 dau tien
    // Dieu kien dung la khi 1 trong 2 chi so ra ngoai mang
    
    while(x <m && y <n ){
        if(array_x[x] >= array_y[y]){
            array_x[index] = array_y[y];
            index++;
            y++;
            // Neu doi cho thang y thi cong 1 vao chi so y va index
        } else {
            // TH x < y thi doi cho
            array_x[index] = array_x[x];
            array_x[x] = 0;
            // Thay doi chi so
            index++;
            x++;
            // Sao chep phan tu voi truong hop dung
            if(x == m){
                for(int j=index;j<m;j++){
                    array_x[j] = array_y[y];
                    y++;
                }
            }
            // Done
        }
    }
}

int main() {
    int m,n;
    printf("Moi ban nhap lan luot so luong phan tu cua 2 mang: ");
    scanf("%d%d",&m,&n);
    // Khai bao mang
    int array_x[m];
    int array_y[n];
    printf("Moi ban nhap lan luot phan tu cua 2 mang: ");
    for(int i=0;i<m;i++){
        scanf("%d",&array_x[i]);
    }
    for(int j=0;j<n;j++){
        scanf("%d",&array_y[j]);
    }
    // Sap xep cac phan tu
    sort(array_x,m);
    sort(array_y,n);
    // Tron 2 mang
    merge(array_x,array_y,m,n);
    // In phan tu
    printf("Phan tu sau khi sap xep la: ");
    for(int i=0;i<m;i++){
        printf("%d ",array_x[i]);
    }
    return 0;
}