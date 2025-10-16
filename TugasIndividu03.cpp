#include <iostream>
using namespace std;

int main() {
    int primeNumbers[50]; // Array untuk menyimpan bilangan prima
    int count = 0;       // Menghitung jumlah bilangan prima
    int sum = 0;         // Menghitung total penjumlahan bilangan prima

    // Mencari bilangan prima dari 1 sampai 50
    for (int num = 1; num <= 50; num++) {
        bool isPrime = true; // Anggap bilangan prima sampai terbukti sebaliknya
        if (num < 2) {
            isPrime = false;
        }
        else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            primeNumbers[count] = num;
            sum += num;
            count++;
        }
    }

    // Menampilkan hasil
    cout << "Bilangan prima dari 1 sampai 50 adalah:" << endl;
    for (int i = 0; i < count; i++) {
        cout << primeNumbers[i] << " ";
    }
    cout << endl;
    cout << "Jumlah bilangan prima: " << count << endl;
    cout << "Hasil penjumlahan bilangan prima: " << sum << endl;

    return 0;
}