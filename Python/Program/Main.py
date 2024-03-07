from ParkingLot import ParkingLot
from Garage import Garage
from Motorcycle import Motorcycle
from Car import Car

# Data 1 Motor
data_motor = Motorcycle("Motor Bebek", 150)
data_motor.set_plat_nomor("D 3124 DIT")
data_motor.set_merk("Honda")
data_motor.set_jenis("Motor Bebek")
data_motor.set_tahun_produksi(2022)
data_motor.set_warna("Putih")

# Data ParkingLot 1
kota_parkir = ParkingLot(100, 5)
kota_parkir.set_data_motor(data_motor)

# Data 1 Mobil
data_mobil = Car(6, 4)
data_mobil.set_plat_nomor("D 124 DIT")
data_mobil.set_merk("Honda")
data_mobil.set_tahun_produksi(2022)
data_mobil.set_warna("Abu")

# Data Garage 1
garasi1 = Garage("Budi Garasi", 1000)
garasi1.set_data_mobil(data_mobil)

# Data 2 Motor
data_motor = Motorcycle("Motor Sport", 250)

data_motor.set_plat_nomor("B 1234 ABC")
data_motor.set_merk("Yamaha")
data_motor.set_jenis("Motor Sport")
data_motor.set_tahun_produksi(2021)
data_motor.set_warna("Hitam")

kota_parkir.set_data_motor(data_motor)

# Data 2 Mobil
data_mobil = Car(4, 2)
data_mobil.set_plat_nomor("B 5678 DEF")
data_mobil.set_merk("Toyota")
data_mobil.set_tahun_produksi(2020)
data_mobil.set_warna("Merah")

garasi1.set_data_mobil(data_mobil)

# Data 3 Motor
data_motor = Motorcycle("Motor Matic", 125)

data_motor.set_plat_nomor("AB 9876 XYZ")
data_motor.set_merk("Suzuki")
data_motor.set_jenis("Motor Matic")
data_motor.set_tahun_produksi(2023)
data_motor.set_warna("Biru")

kota_parkir.set_data_motor(data_motor)

# Data 3 Mobil
data_mobil = Car(4, 2)
data_mobil.set_plat_nomor("AB 1234 WXY")
data_mobil.set_merk("Daihatsu")
data_mobil.set_tahun_produksi(2023)
data_mobil.set_warna("Hijau")

garasi1.set_data_mobil(data_mobil)

# Data 4 Motor
data_motor = Motorcycle("Motor Trail", 450)

data_motor.set_plat_nomor("CD 5678 RST")
data_motor.set_merk("Kawasaki")
data_motor.set_jenis("Motor Trail")
data_motor.set_tahun_produksi(2019)
data_motor.set_warna("Orange")

kota_parkir.set_data_motor(data_motor)

# Data 4 Mobil
data_mobil = Car(5, 4)
data_mobil.set_plat_nomor("CD 1234 UVW")
data_mobil.set_merk("BMW")
data_mobil.set_tahun_produksi(2018)
data_mobil.set_warna("Putih")

garasi1.set_data_mobil(data_mobil)

# Data 5 Motor
data_motor = Motorcycle("Motor Custom", 500)

data_motor.set_plat_nomor("EF 1234 GHI")
data_motor.set_merk("Harley Davidson")
data_motor.set_jenis("Motor Custom")
data_motor.set_tahun_produksi(2017)
data_motor.set_warna("Coklat")

kota_parkir.set_data_motor(data_motor)

# Data 5 Mobil
data_mobil = Car(2, 2)
data_mobil.set_plat_nomor("EF 5678 JKL")
data_mobil.set_merk("Ferrari")
data_mobil.set_tahun_produksi(2024)
data_mobil.set_warna("Kuning")

garasi1.set_data_mobil(data_mobil)

# Mendapatkan data Motor dari ParkingLot
temp_parkir_lot = kota_parkir.get_data_motor().copy()

# Menampilkan informasi Motor pada ParkingLot
for i in range(5):
    print("Informasi Motor pada ParkingLot:")
    print("Plat Nomer Motor            : ", temp_parkir_lot[i].get_plat_nomor())
    print("Merk Motor                  : ", temp_parkir_lot[i].get_merk())
    print("Jenis Motor                 : ", temp_parkir_lot[i].get_jenis())
    print("Kapasitas Tangki Motor      : ", temp_parkir_lot[i].get_kapasitas(), " CC")
    print("Tahun Produksi Motor        : ", temp_parkir_lot[i].get_tahun_produksi())
    print("Warna Motor                 : ", temp_parkir_lot[i].get_warna())
    
    print("\n")

# Menampilkan informasi ParkingLot
print("Informasi Kapasitas ParkingLot:")
print("Kapasitas                   : ", kota_parkir.get_kapasitas())
print("Jumlah Kendaraan saat ini   : ", kota_parkir.get_jumlah_kendaraan_saat_ini())
print("\n")

# Mendapatkan data Mobil dari Garage
temp_kendaraan_mobil = garasi1.get_data_mobil()

# Menampilkan informasi Mobil
for j in range(5):
    print("Informasi Mobil pada Garasi:")
    print("Plat Nomer Mobil      : ", temp_kendaraan_mobil[j].get_plat_nomor())
    print("Merk Mobil            : ", temp_kendaraan_mobil[j].get_merk())
    print("Jumlah Kursi Mobil    : ", temp_kendaraan_mobil[j].get_jumlah_kursi(), " Seat")
    print("Jumlah Pintu Mobil    : ", temp_kendaraan_mobil[j].get_jumlah_pintu(), " Pintu")
    print("Tahun Produksi Mobil  : ", temp_kendaraan_mobil[j].get_tahun_produksi())
    print("Warna Mobil           : ", temp_kendaraan_mobil[j].get_warna())
    print("\n")

# Menampilkan informasi Garage
print("Informasi Kapasitas Garage:")
print("Nama Garasi           : ", garasi1.get_nama_garasi())
print("Luas Garasi           : ", garasi1.get_luas_garasi(), " M")
print("\n")
