#include<stdio.h>
// Ham tim kiem
bool search(int array[], int first, int last, int k){
    for(int i= first;i<last;i++){
        if(array[first] == k){
            return 1;
        }
    }
    return 0;
}

// Ham kiem tra 
void hashing(int array[],int n,int sum){
    for(int i=0;i<n;i++){
        int k = sum - array[i];
        int fact = search(array,i+1,n,k);
        if(fact == 1){
            printf("Found pair (%d.%d). \n",array[i],k);
        }
    }
}

int main() {
    int n;
    printf("Moi ban nhap so luong phan tu: ");
    scanf("%d",&n);
    int array[n];
    printf("Moi ban nhap lan luot cac phan tu cua mang: ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int sum;
    printf("Moi ban nhap tong can tim: ");
    scanf("%d",&sum);
    hashing(array,n,sum);
    return 0;
}