#include <iostream>
using namespace std;

int main (){

    cout << "\tProgram memeriksa Tahun Kabisat\n";
    cout << "==============================================\n";
    int tahun;
    cout << "Masukan tahun yang ingin anda periksa : ";
    cin >> tahun ;
    cout << " \n";

    if (tahun%4==0)
        cout << tahun << " merupakan tahun kabisat \n";
    else if (tahun%4!=0)
        cout << tahun << " bukan tahun kabisat \n";
    else
        cout << "Tahun yang anda masukan salah \n";


return 0;
}
