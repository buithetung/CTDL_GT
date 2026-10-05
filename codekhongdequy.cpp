#include<iostream>
using namespace std;
struct diskstatus {
    int so_dia;
    char cot_goc, cot_trunggian, cot_dich;
};

const int MAX = 500;
diskstatus s[MAX];
int top = -1;

void push_dia(int dia, char goc, char trunggian, char dich) {
    if (top >= MAX - 1){
        cout << "Tran bo nho." << endl;
        return;
    }
    top++;
    s[top].so_dia = dia;
    s[top].cot_goc = goc;
    s[top].cot_trunggian = trunggian;
    s[top].cot_dich = dich;
}

diskstatus pop_dia() {
    return s[top--];
}

void khu_de_quy(int tong_dia, char c_goc, char c_trunggian, char c_dich){
    if (tong_dia <= 0) {
        cout << "So dia khong hop le." << endl;
        return;
    }
    top = -1;
    int dem = 0;
    push_dia(tong_dia,c_goc,c_trunggian,c_dich);

    while (top >= 0){
        diskstatus currency = pop_dia();

        if(currency.so_dia == 1) {
            dem++;
            cout << "Lan " << dem << ": Chuyen tu " << currency.cot_goc << " => " << currency.cot_dich << endl;
        } else {
            push_dia(currency.so_dia - 1, currency.cot_trunggian, currency.cot_goc, currency.cot_dich);
            push_dia(1, currency.cot_goc, currency.cot_trunggian, currency.cot_dich);
            push_dia(currency.so_dia - 1, currency.cot_goc, currency.cot_dich, currency.cot_trunggian);
        }
    }
    cout << "Tong so buoc la: " << dem << " buoc." << endl;
}
int main() {
    int n;
    cout << " Moi ban nhap so dia: ";
    cin >> n;
    khu_de_quy(n, 'A', 'B', 'C');
    return 0;
}