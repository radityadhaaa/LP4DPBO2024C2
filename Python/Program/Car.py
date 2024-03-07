# Import library yang digunakan
from Vehicle import Vehicle

'''
    Kelas Car yang digunakan untuk merepresentasikan data mobil
'''
class Car(Vehicle):
    def __init__(self, jumlah_kursi=0, jumlah_pintu=0):
        # Atribut yang digunakan pada kelas Car terdiri dari jumlah kursi dan jumlah pintu
        self.jumlah_kursi = jumlah_kursi
        self.jumlah_pintu = jumlah_pintu

    # Method setter untuk set nilai setiap atribut pada kelas Car
    def set_jumlah_kursi(self, jumlah_kursi):
        self.jumlah_kursi = jumlah_kursi

    def set_jumlah_pintu(self, jumlah_pintu):
        self.jumlah_pintu = jumlah_pintu

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas Car
    def get_jumlah_kursi(self):
        return self.jumlah_kursi

    def get_jumlah_pintu(self):
        return self.jumlah_pintu
