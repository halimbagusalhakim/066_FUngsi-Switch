#include <iostream>
using namespace std;

int bilSatu, bilDua;
void input(){
    cout << "masukan Bilangan Pertama = ";
    cin >> bilSatu;
    cout << "Masukan Bilangan Kedua =";
    cin >> bilDua;
}
float penjumlahan(float a, float b){
    return a + b;
}
float pembagian(float a, float b){
    return a / b;
}
float perkalian(float a, float b){
    return a * b;
}
float pengurangan (float a, float b){
    return a - b;
}


int main(){
    int pilihan;
    

    do{
        cout << "==============" << endl;
        cout << "Menu" << endl;
        cout << "1. penjumlahan" << endl;
        cout << "2. pembagian" << endl;
        cout << "3. perkalian" << endl;
        cout << "4. pengurangan" << endl;
        cout << "5. exit" << endl;
        cout << "masukan pilihan 1/2/3/4/5" << endl;
        cin >> pilihan;
         
        switch (pilihan)
        {
        case 1:
            input();
            cout << "Hasil penjumlahan = " << penjumlahan(bilSatu, bilDua) << endl;
            system("pause");
            break;
            
        case 2:
            input();
            cout << "Hasil perkalian = " << perkalian(bilSatu, bilDua) << endl;
            system("pause");
            break;
            
        
        case 3:
            input();
            cout << "Hasil pembagian = " << pembagian(bilSatu, bilDua) << endl;
            system("pause");
            break;

        case 4:
            input();
            cout << "Hasil pengurangan = " << pengurangan(bilSatu, bilDua) << endl;
            system("pause");
            break;

        case 5:
            break;
        
        default:
            cout << "pilihan tidak ada" << endl;
            system("pause"); 
            break;
            
        
        
        }
    system("CLS");
    }while (pilihan != 5);
}