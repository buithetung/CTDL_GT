#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Moi ban nhap so phan tu: ";
    cin >> n;
    int array[n];
    cout << "Moi ban nhap lan luot cac phan tu: " << endl;
    for(int i=0;i<n;i++) {
        cin >> array[i];
    }

    // Sap xep
    for(int i =0;i<n;i++){
        int min = array[i];
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(array[j] < min){
                min_index = j;
                min = array[j];
            }
        }
        int c = array[i];
        array[i] = array[min_index];
        array[min_index] = c;
        cout << " Buoc " << i + 1 << ": ";
        for(int k=0;k<n;k++){
             cout << array[k] << " ";
        }
        cout << endl;
    }

    return 0;
}