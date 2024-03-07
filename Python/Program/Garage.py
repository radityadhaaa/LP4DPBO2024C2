# Import library yang digunakan
from Car import Car

'''
    Kelas Garage yang digunakan untuk merepresentasikan data garasi
'''
class Garage:
    def __init__(self, nama_garasi='', luas_garasi=0):
        # Atribut yang digunakan pada kelas Garage terdiri dari nama garasi, dan luas garasi
        self.nama_garasi = nama_garasi
        self.luas_garasi = luas_garasi
        self.data_mobil = []

    # Method setter untuk set nilai setiap atribut pada kelas Garage
    def set_nama_garasi(self, nama_garasi):
        self.nama_garasi = nama_garasi

    def set_luas_garasi(self, luas_garasi):
        self.luas_garasi = luas_garasi

    def set_data_mobil(self, data_mobil):
        self.data_mobil.append(data_mobil)

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas Garage
    def get_nama_garasi(self):
        return self.nama_garasi

    def get_luas_garasi(self):
        return self.luas_garasi

    def get_data_mobil(self):
        return self.data_mobil
