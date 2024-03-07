# Import library yang digunakan
from Vehicle import Vehicle

'''
    Kelas Motorcycle yang digunakan untuk merepresentasikan data Motor
'''
class Motorcycle(Vehicle):
    def __init__(self, jenis_motor='', kapasitas_tangki=0):
        # Atribut yang digunakan pada kelas Motorcycle terdiri dari jenis motor dan kapasitas tangki
        self.jenis_motor = jenis_motor
        self.kapasitas_tangki = kapasitas_tangki

    # Method setter untuk set nilai setiap atribut pada kelas Motorcycle
    def set_jenis(self, jenis_motor):
        self.jenis_motor = jenis_motor

    def set_kapasitas(self, kapasitas_tangki):
        self.kapasitas_tangki = kapasitas_tangki

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas Motorcycle
    def get_jenis(self):
        return self.jenis_motor

    def get_kapasitas(self):
        return self.kapasitas_tangki
