#include "Client.h"
#define CREATE_OR_LOAD 0 //0-Create, 1-Load

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

    /*Client b; // name = "", number = 0, money = 0, ...

    FILE* fp = nullptr;
    //fopen_s(&fp, "bank.txt", "r"); //VS
    fp = fopen("bank.txt", "r"); //CLion, Online
    if (fp != nullptr) {
        b.loadFromTextFile(fp);
        fclose(fp);
    }

    b.printClient();*/

    int NClients = 0; //К-ть клієнтів = Розмір масиву
    Client* arr = nullptr; //Масив клієнтів

#if CREATE_OR_LOAD == 0
    NClients = 3;
    arr = new Clien[NClients] {
        {"Pupkin Mykola", 123456, 200, {1, 1, 2000}},
        {"Shevchenko Taras", 543216, 5'000, {12, 7, 2021}},
        {"Franko Ivan", 765432, 2'500, {30, 8, 2019}}
    };
#elif CREATE_OR_LOAD == 1
    //load
#endif




    return 0;
}