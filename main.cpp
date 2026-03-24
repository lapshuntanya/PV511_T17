#include "Client.h"

int main() {

    Client a;
    a.fillClient();
    a.money += 200;


    cout << "\n\n";
    a.printClient();


    return 0;
}