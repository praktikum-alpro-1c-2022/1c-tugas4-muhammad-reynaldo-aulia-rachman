#include <iostream>
using namespace std;

int main (){
    cout << "\t Membuat Program Login Sederhana\n";
    cout << "==============================================\n";

    string username,password;

    cout << "Masukkan Username anda : ";
    cin >> username;
    cout << "Masukkan Password anda : ";
    cin >> password;
    cout << " \n";

    if (username =="reynaldo"&& password == "1234")
        cout << "Username dan Password sesuai, Login berhasil\n";
        else if (username == "reynaldo" && password != "1234")
            cout << "Username sesuai,Password tidak sesuai\n";
        else if (username!="reynaldo" && password =="1234")
            cout << "Username tidak sesuai, Password sesuai\n";
    else
        cout << "Username dan Password tidak sesuai\n";

}
