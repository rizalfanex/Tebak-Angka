#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); // inisialisasi seed untuk random number generator
    const int MAX_NUMBER = 100;
    int secretNumber = rand() % MAX_NUMBER + 1;
    int guess, numTries = 0;

    cout << "*** Selamat datang di game tebak angka ***" << endl << endl;
    do {
        cout << "Silahkan pilih angka (1-" << MAX_NUMBER << "): ";
        cin >> guess;
        numTries++;
        if (guess > secretNumber)
            cout << "Terlalu rendah. coba lagi." << endl;
        else if (guess < secretNumber)
            cout << "Terlalu tinggi. coba lagi." << endl;
    } while (guess != secretNumber);

    cout << "Selamat! Anda menebak nomor rahasianya dalam " << numTries << " percobaan." << endl;
    return 0;
}

