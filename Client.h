//
// Created by Tetiana Perederii on 24.03.2026.
//
#ifndef PV511_T17_CLIENT_H
#define PV511_T17_CLIENT_H

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "DateMac.h"
using namespace std;

struct Client {
    char name[100] = "";
    unsigned long number = 0; //unsigned 0+, long - 8bt
    double money = 0;
    Date opened_date;

    void fillClient() { // !!! cin.ignore();
        cout << "Input name: ";
        cin.getline(name, 100);
        number = rand()*1'000 + rand(); //32'000 000
        cout << "Topup cash: ";
        cin >> money;
        opened_date.getNowDate();
    }

    void printClient() {
        cout << "Client: " << name << endl;
        cout << "Card:   " << number << endl;
        cout << "Money:   " << money << " UAH" << endl;
        cout << "Opened date:   " << opened_date.toString("%Y.%m.%d") << endl;
        cout << "---------------------------------------------\n\n";
    }

    void saveToTextFile(FILE* fp) {
        fprintf(fp, "\n%s", name);
        fprintf(fp, "\n%lu", number);
        fprintf(fp, "\n%lf", money);
        fprintf(fp, "\n%d %d %d", opened_date.year, opened_date.month, opened_date.day);
    }

    void loadFromTextFile(FILE* fp) {
        fscanf_s(fp, "\n"); //VS
        fgets(name, 100, fp); //"Pupkin Mykola\n"
        int len = strlen(name);
        name[len - 1] = '\0';   //"Pupkin Mykola\0"

        fscanf_s(fp, "%lu", &number);
        fscanf_s(fp, "%lf", &money);
        fscanf_s(fp, "%d %d %d", &opened_date.year, &opened_date.month, &opened_date.day);
    }
};


#endif //PV511_T17_CLIENT_H