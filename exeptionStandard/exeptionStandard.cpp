#include <iostream>
#include <exception>
//untuk objek exeption yang akan digunakan
#include <array>
//untuk objek array yang akan kita gunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; //penanda 1
    try {
        array<int, 3> data = { 1,2,3 };
    }
    catch (exception& e) {
        //penangkap menggunakan objek exeption
        cout << e.what() << endl;
        /*akan dieksekusi karena array data hanyaa memiliki 3 elemen*/
    }
    cout << "Baris Program yang Terakhir" << endl;
    /*penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}

