#include "Client.h"

int main() {

    /*
    Client a;
    a.fillClient();

    cout << "\n\n";
    a.printClient();

    FILE* fp = nullptr;
    //fopen_s(&fp, "bank.txt", "w"); //VS
    fp = fopen( "bank.txt", "w"); //CLion, Online
    if (fp!= nullptr) {
        a.saveToTextFile(fp);
        fclose(fp);
        cout << "Saved!\n";
    }*/

    Client b; // name = "", number = 0, money = 0, ...

    FILE* fp = nullptr;
    //fopen_s(&fp, "bank.txt", "r"); //VS
    fp = fopen("bank.txt", "r"); //CLion, Online
    if (fp != nullptr) {
        b.loadFromTextFile(fp);
        fclose(fp);
    }

    b.printClient();

    return 0;
}