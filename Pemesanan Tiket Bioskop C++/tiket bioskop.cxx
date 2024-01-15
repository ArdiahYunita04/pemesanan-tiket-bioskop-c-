#include <iostream>
using namespace std;

int main() {
	
	int hargaTiket, pilihanFilm, jumlahTiket, totalBayar, uangDibayar, kembalian;
	
	// Daftar film yang sedang tayang dan harga tiket
    const string movies[] = {"NARNIA 2", "Evil Nun", "172 Days"};
    const double prices[] = {50000, 37000, 45000};
    
    
    // Input pilihan film
    cout << "\n---- SISTEM PEMESANAN TIKET BIOSKOP ----\n";

    cout << "Daftar film:\n";
    for (int i = 0; i < sizeof(movies) / sizeof(movies[0]); ++i) {
        cout << i + 1 << ". " << movies[i] << " : Rp " << prices[i] << " per tiket\n";
    }

    int choice;
    cout << "\nPilih film (1-" << sizeof(movies) / sizeof(movies[0]) << "): ";
    cin >> choice;

    if (choice < 1 || choice > sizeof(movies) / sizeof(movies[0])) {
        cout << "Pilihan tidak valid.\n";
        return 1;
    }

    // Input jumlah tiket yang dibeli
    cout << "Masukkan jumlah tiket yang dibeli: ";
    cin >> jumlahTiket;

    // Menggunakan indeks film yang dipilih untuk mendapatkan harga tiket yang sesuai
    hargaTiket = prices[choice - 1];

    // Hitung total pembayaran
    totalBayar = hargaTiket * jumlahTiket;

    // Tampilkan total pembayaran
    cout << "Total pembayaran: Rp " << totalBayar << endl;

    // Input uang yang dibayarkan
    cout << "Masukkan uang yang dibayarkan: ";
    cin >> uangDibayar;

    // Hitung kembalian
    kembalian = uangDibayar - totalBayar;

    // Tampilkan kembalian
    if (kembalian >= 0) {
        cout << "Kembalian: Rp " << kembalian << endl;
    } else {
        cout << "Uang yang dibayarkan kurang!" << endl;
    }

    return 0;
}