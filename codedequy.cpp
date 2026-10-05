#include <iostream>
using namespace std;
int stt = 0;
void thap_ha_noi(int sodia, char cot_goc, char cot_trunggian, char cot_dich){
    if(sodia <= 0){
        return;
    }
    if(sodia == 1){
        stt++;
        cout << stt << "." << " Chuyen dia " << sodia << ": tu " << cot_goc << "=>" << cot_dich << endl;
        return;
    }
    thap_ha_noi(sodia-1, cot_goc, cot_dich, cot_trunggian);
    stt++;
    cout << stt << "." << " Chuyen dia " << sodia << ": tu " << cot_goc << "=>" << cot_dich << endl;
        return;
    thap_ha_noi(sodia-1, cot_trunggian, cot_goc, cot_dich);

}
int main() {
    int n;
    cout <<"Moi ban nhap so dia: ";
    cin >> n;
    thap_ha_noi(n, 'A', 'B', 'C');
    return 0;
}