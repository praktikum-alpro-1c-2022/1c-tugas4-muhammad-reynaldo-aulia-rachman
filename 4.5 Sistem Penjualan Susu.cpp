 #include <iostream>
using namespace std;

int main(){
    cout << "\tDaftar Harga Produk Susu\n";
    cout << "==========================================\n";
    cout << "|Kode Susu|Nama Produk|Ukuran  |  Harga  |\n";
    cout << "==========================================\n";
    cout << "|    1    |   Dancow  |b=Besar |Rp.10.000|\n";
    cout << "|         |           |s=Sedang|Rp.4.250 |\n";
    cout << "|         |           |k=Kecil |Rp.2.100 |\n";
    cout << "==========================================\n";
    cout << "|    2    |  Indomilk |b=Besar |Rp.8.500 |\n";
    cout << "|         |           |s=Sedang|Rp.4.000 |\n";
    cout << "|         |           |k=Kecil |Rp.2.025 |\n";
    cout << "==========================================\n";
    cout << "|    3    |  Sustacal |b=Besar |Rp.17.000|\n";
    cout << "|         |           |s=Sedang|Rp.14.500|\n";
    cout << "|         |           |k=Kecil |Rp.8.300 |\n";
    cout << "==========================================\n\n";

    double kode, jumlah,b1,b2,b3,s1,s2,s3,k1,k2,k3;
    b1 = 10000, b2 = 8500, b3 = 17000, s1 = 4250, s2 = 4000, s3 = 14500, k1 = 2100, k2 = 2025, k3 = 8300;
    char ukuran;
    cout << "Masukan kode susu yang anda mau (1-3): ";
    cin >> kode;
    cout << "Masukan Jumlah Pembelian             : ";
    cin >> jumlah;
    cout << "Masukan ukuran yang anda mau (b,s,k) : ";
    cin >> ukuran;
    cout << " \n";
    if (kode==1)
        cout << "Susu yang anda mau        : Dancow\n";
    else if (kode==2)
        cout << "Susu yang anda mau        : Indomilk\n";
    else if (kode==3)
        cout << "Susu yang anda mau        : Sustacal\n";
    else
        cout << "Kode yang anda masukan salah";

        cout << "Jumlah yang anda beli     : "<< jumlah << endl;

    if (ukuran=='b')
        cout << "Ukuran susu yang anda mau : Besar";
    else if (ukuran=='s')
        cout << "Ukuran susu yang anda mau : Sedang";
    else if (ukuran=='k')
        cout << "Ukuran susu yang anda mau : Kecil";
    else
        cout << "Ukuran yang anda pilih tidak tersedia";

    cout << " \n";

    //Untuk Kode susu 1
    if (kode==1 && ukuran =='b')
        cout << "Total Harga               : Rp." << jumlah * b1 << endl;
    else if (kode==1 && ukuran =='s')
        cout << "Total Harga               : Rp." << jumlah * s1 << endl;
    else if (kode==1 && ukuran =='k')
        cout << "Total Harga               : Rp." << jumlah * k1 << endl;

    //Untuk Kode susu 2
    else if (kode==2 && ukuran =='b')
        cout << "Total Harga               : Rp." << jumlah * b2 << endl;
    else if (kode==2 && ukuran =='s')
        cout << "Total Harga               : Rp." << jumlah * s2 << endl;
    else if (kode==2 && ukuran =='k')
        cout << "Total Harga               : Rp." << jumlah * k2 << endl;

    //Untuk Kode susu 3
    else if (kode==3 && ukuran =='b')
        cout << "Total Harga               : Rp." << jumlah * b3 << endl;
    else if (kode==3 && ukuran =='s')
        cout << "Total Harga               : Rp." << jumlah * s3 << endl;
    else if (kode==3 && ukuran =='k')
        cout << "Total Harga               : Rp." << jumlah * k3 << endl;
    else
        cout << "Kode yang anda masukan salah";


return 0;
}
