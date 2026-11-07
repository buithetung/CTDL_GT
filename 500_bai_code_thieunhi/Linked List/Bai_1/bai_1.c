#include<stdio.h>
// Ham sap xep
void sort (int array[], int n){
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


// Ham dem so cac phan tu 0 cua mang 
int number(int array[], int n){
    int index = 0;
    for(int i=0;i<n;i++){
        if(array[i] == 0){
            index++;
        }
    }
    return index;
}
int main() {
    // Khai bao hai mang
    int m ,n;
    printf("Moi ban nhap lan luot kich thuoc mang 1 va 2: ");
    scanf("%d%d",&m, &n);
    int array_x[m];
    int array_y[n];
    printf("Moi ban nhap lan luot cac phan tu cua mang X: ");
    for(int i=0;i<m;i++){
        scanf("%d",&array_x[i]);
    }
    printf("Moi ban nhap lan luot cac phan tu cua mang Y: ");
    for(int j=0;j<n;j++){
        scanf("%d",&array_y[j]);
    }
    // Sap xep hai mang 
    sort(array_x,m);
    sort(array_y,n);
    // Khai bao 2 bien chay
    int index_x = number(array_x,m);
    int index_y = 0;
    int moc = 0;
    // Trong mang 
    // Dieu kien dung la khi ca 2 index deu trong khoang
    while( moc < index_x){
        // So sanh 2 phan tu 
        if(array_y[index_y] <= array_x[index_x]){
            // Nho hon thi gan gia tri va cong 1
            array_x[moc] = array_y[index_y];
            moc++;
            index_y++;
        } else {
            // Doi cho va cong hai bien
            int c = array_x[index_x];
            array_x[index_x] = array_x[moc];
            array_x[moc] = c;
            moc++;
            index_x++;
            if(index_x >= m){
                index_x--;
            }
        }
    }
    // Khi index = moc;
    array_x[index_x] = array_y[index_y];
    // In mang
    printf("Cac phan tu sau khi sap xep la: ");
    for(int k=0;k<m;k++){
        printf("%d ",array_x[k]);
    }

    return 0;
}