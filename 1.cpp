#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
int main() {
    using namespace std;
    srand(time(NULL));
    cout << "n?\n";
    int n;
    cin >> n;
    cout << "min?\n";
    int mini;
    cin >> mini;
    cout << "max?\n";
    int maxi;
    cin >> maxi;
    fstream F;
    F.open("F.txt", ios::out); // на запись
    for (int i = 0; i < n; i++) {
        F << rand() % (maxi + 1 - mini) + mini << " ";
    }
    F.close();
    F.open("F.txt", ios::in); // чтение
    ofstream G;
    G.open("G.txt", ios::out); // запись
    for (int i = 0; i < n; i++) {
        int temp;
        F >> temp;
        if (temp % 2 == 0){
            G << temp << " ";
        }
    }
    G.close();
    F.close();
    return 0;
}
