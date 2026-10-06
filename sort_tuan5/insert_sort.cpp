#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Nhap so luong phan tu:"<<endl;
cin >> n;
int Mang[n];
cout << "Moi ban nhap cac phan tu cua mang: " << endl;
for (int i=0;i<n;i++){
    cin>>Mang[i];
}
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        if(Mang[j]>=Mang[i]){
            int temp=Mang[j];
            Mang[j]=Mang[i];
            for(int k=j;k<i;k++){
                int temp2 = Mang[k+1];
                Mang[k+1]=temp;
                temp = temp2;
            }   
        }
        else continue;
    }
    for(int j=0;j<n;j++){
    cout<<Mang[j]<<" ";
    if(j==n-1) cout<<endl;
    }
}


return 0;
}
