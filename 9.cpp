#include <iostream>
using namespace std;

int main() {
    int i, N, jumlah = 0;
    i = 1;
    int count = 0;  

    cout << "Masukan banyak nilai : ";
    cin >> N;

    while (i <= N) {
        cout << i * 7 << " + ";
        jumlah = jumlah + (i * 7);
        i++;
        count++; 
    }

    cout << i * 7 << " = " << jumlah << endl;
    
    float rata = (float)jumlah / count;
    cout << "Rata-rata: " << jumlah << " / " << count << " = " << rata << endl;

    return 0;
}
