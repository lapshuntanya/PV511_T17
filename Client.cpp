//
// Created by Tetiana Perederii on 24.03.2026.
//
#include "Client.h"


void saveArray(Client *arr, int size) {
    FILE* fp = nullptr;
   // fopen_s(&fp, "bank.txt", "w"); //VS
   fp =  fopen("bank.txt", "w"); //Clion, Online
   if (fp == nullptr)
       cout << "Error: not saved" << endl;
    else {
        fprintf(fp, "%d", size);
        for (int i = 0; i < size; i++) {
            arr[i].saveToTextFile(fp);
        }
        fclose(fp);
        cout << "Saved!\n";
    }
}

void loadArray(Client *&arr, int &size) {

}

void printArray(Client *arr, int size) {

}