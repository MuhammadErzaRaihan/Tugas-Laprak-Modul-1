print("Harga sepatu A adalah 400000")
print()
print("Harga sepatu B adalah 350000")
print()

Harga_Sepatu_A = 400000
Harga_Sepatu_B = 350000

setelah_diskon_A = Harga_Sepatu_A
if (Harga_Sepatu_A >= 400000):
   diskon_A  = Harga_Sepatu_A - Harga_Sepatu_A*13/100

setelah_diskon_B = Harga_Sepatu_B
if (Harga_Sepatu_B >= 350000):
   diskon_B = Harga_Sepatu_B - Harga_Sepatu_B*21/100


print('Sepatu A mendapat diskon 13% sehingga harganya menjadi : {}'.format(int(diskon_A)))
print('Sepatu A mendapat diskon 13% sehingga harganya menjadi : {}'.format(int(diskon_B)))