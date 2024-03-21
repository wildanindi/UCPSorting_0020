// Soal Type B

// 1. bubble sort bekerja dengan cara membandingkan satu per satu angka hingga menemukan angka terkecil.
// 
// 2. shell sort bekerja dengan cara membagi angka angka ke beberapa kelompok.
//    dengan cara yaitu, yang pertama dengan menggabungkan setiap angka yang berjarak indexnya '3',
//    setelah terbagi menjadi beberapa kelompok, selanjutkan menggabungkan kembali angka2 yang sudah di kelompokkan
//    secara urutan kelompok, selanjutnya yaitu menggabungkan setiap angka yang berjarak indexnya '2',
//    saat sudah menjadi beberapa kelompok lgi, di gabungkan sesuai urutan list/kelompok tdi, langkah yang terakhir mirip
//    dengan bubble sort yang membandingkan satu per satu angka yang telah di urutkan dari kelompok tadi.
// 
//    (jadi intinya shell sort ini bekerja dengan cara mengelompokkan setiap angka terlebih dahulu)
//    kemungkinan biasanya di pakai untuk data yang banyak
// 
// 3. selection sort, karena algoritma ini hanya mencari angka yang belum berurutan.

#include <iostream>
using namespace std;

int wildan[20];
int n;

void input() {
    while (true) {
        cout << "Masukkan jumlah Nim : ";
        cin >> n;
        if (n <= 11)
            break;
        else {
            cout << "\nwildan dapat mempunyai maksimal 11 angka nim.\n";
        }
    }

    cout << endl;
    cout << "=================" << endl;        
    cout << "Masukkan Nim " << endl;    
    cout << "=================" << endl;

    for (int i = 0; i < n; i++) {      
        cout << "Data ke-" << (i + 1) << ": ";  
        cin >> wildan[i];  
    }

}

void insertionSort() {
    int i, temp, j;


    for (i = 1; i <= n - 1; i++) { 

        temp = wildan[i]; 

        j = i - 1; 

        while (j >= 0 && wildan[j] > temp) 
        {
            wildan[j + 1] = wildan[j]; 
            j--; 
        }

        wildan[j + 1] = temp; 
    }
}

void display() {
    cout << endl;
    cout << "=====================================" << endl;
    cout << "Nim yang tersusun" << endl;
    cout << "=====================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << wildan[j];
        if (j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;

}



int main()
{
    input();    
    insertionSort();  
    display();
    system("pause");

    return 0;
}

