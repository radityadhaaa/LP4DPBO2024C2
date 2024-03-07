'''
    Kelas Vehicle yang digunakan untuk merepresentasikan data kendaraan
'''
class Vehicle:
    def __init__(self, plat_nomor='', merk='', tahun_produksi=0, warna=''):
        # Atribut yang digunakan pada kelas Vehicle terdiri dari plat nomor, merk, tahun produksi, dan warna
        self.plat_nomor = plat_nomor
        self.merk = merk
        self.tahun_produksi = tahun_produksi
        self.warna = warna

    # Method setter untuk set nilai setiap atribut pada kelas Vehicle
    def set_plat_nomor(self, plat_nomor):
        self.plat_nomor = plat_nomor

    def set_merk(self, merk):
        self.merk = merk

    def set_tahun_produksi(self, tahun_produksi):
        self.tahun_produksi = tahun_produksi

    def set_warna(self, warna):
        self.warna = warna

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas Vehicle
    def get_plat_nomor(self):
        return self.plat_nomor

    def get_merk(self):
        return self.merk

    def get_tahun_produksi(self):
        return self.tahun_produksi

    def get_warna(self):
        return self.warna
