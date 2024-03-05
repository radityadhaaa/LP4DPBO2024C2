// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include <vector>
#include "Car.cpp"

// Deklarasi namespace
using namespace std;

/*
    Kelas Garage yang digunakan untuk merepresentasikan data garasi
*/
class Garage {
private:
    // Atribut yang digunakan pada kelas Garage terdiri dari nama garasi, dan luas garasi
    string nama_garasi;
    int luas_garasi;
    vector<Car> dataMobil;

public:
    // Constructor
    Garage() {
        // Default constructor
    }

    // Constructor : Overloading
    Garage(string nama_garasi, int luas_garasi) {
        this->nama_garasi = nama_garasi;
        this->luas_garasi = luas_garasi;
    }


    // Method setter untuk set nilai setiap atribut pada kelas Garage
    void setNamaGarasi(string nama_garasi) {
        this->nama_garasi = nama_garasi;
    }

    void setLuasGarasi(int luas_garasi) {
        this->luas_garasi = luas_garasi;
    }

    void setDataMobil(Car dataMobil) {
        this->dataMobil.push_back(dataMobil);
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Garage
    string getNamaGarasi() {
        return nama_garasi;
    }

    int getLuasGarasi() {
        return luas_garasi;
    }

    vector<Car> getDataMobil() {
        return dataMobil;
    }

    // Destructor
    ~Garage() {
        // Destructor implementation (if needed)
    }
};
