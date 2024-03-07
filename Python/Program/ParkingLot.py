# Import library yang digunakan
from Motorcycle import Motorcycle

'''
    Kelas ParkingLot yang digunakan untuk merepresentasikan data garasi parkir
'''
class ParkingLot:
    def __init__(self, kapasitas=0, jumlah_kendaraan_saat_ini=0):
        # Atribut yang digunakan pada kelas ParkingLot terdiri dari kapasitas dan jumlah kendaraan saat ini
        self.kapasitas = kapasitas
        self.jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini
        self.data_motor = []

    # Method setter untuk set nilai setiap atribut pada kelas ParkingLot
    def set_kapasitas(self, kapasitas):
        self.kapasitas = kapasitas

    def set_jumlah_kendaraan_saat_ini(self, jumlah_kendaraan_saat_ini):
        self.jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini

    def set_data_motor(self, data_motor):
        self.data_motor.append(data_motor)

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas ParkingLot
    def get_kapasitas(self):
        return self.kapasitas

    def get_jumlah_kendaraan_saat_ini(self):
        return self.jumlah_kendaraan_saat_ini

    def get_data_motor(self):
        return self.data_motor
