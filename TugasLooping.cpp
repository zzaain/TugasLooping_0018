#include <iostream>
using namespace std;

// variabel global
int n, pilihan;

// fungsi cek bilangan prima
bool cekPrima(int n) {
    if (n <= 1) return false;
     int i = 2;
    while (i < n) {
        if (n % i == 0)
            return false;
        i++;
    }
    return true;
}

// fungsi cek bilangan fibonacci
bool cekFibonacci(int n) {

    int a = 0, b = 1, c;
     while (a <= n) {
        if (a == n)
            return true;
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

// prosedur input
void input() {
    cout << "Masukkan bilangan: ";
    cin >> n;
}
// prosedur output prima
void outputPrima() {
    if (cekPrima(n))
        cout << n << " adalah bilangan prima" << endl;
    else
        cout << n << " bukan bilangan prima" << endl;
}
// prosedur output fibonacci
void outputFibonacci() {
    if (cekFibonacci(n))
        cout << n << " termasuk deret Fibonacci" << endl;
    else
        cout << n << " bukan deret Fibonacci" << endl;
}

// fungsi menu
void menu() {
    cout << "\n=== MENU ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih: ";
    cin >> pilihan;
}
int main() {
    while (true) {
        menu();
        switch (pilihan) {
            case 1:
                input();
                outputPrima();
                break;
            
        }
    }
}