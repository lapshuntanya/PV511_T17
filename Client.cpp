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
    FILE* fp = nullptr;
    // fopen_s(&fp, "bank.txt", "r"); //VS
    fp =  fopen("bank.txt", "r"); //Clion, Online
    if (fp == nullptr) {
        arr = nullptr;
        size  = 0;
        cout << "Error: not loaded!\n";
    }else{
       // fscanf_s(fp, "%d", &size); // VS
        fscanf(fp, "%d", &size); // Clion, Online
        arr = new Client[size];
        for (int i = 0; i < size; i++) {
            arr[i].loadFromTextFile(fp);
        }
        fclose(fp);
        cout << "Loaded!\n";
    }
}

void printArray(Client *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i].printClient();
        cout << endl;
    }
}