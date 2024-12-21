baris, kolom = map(int, input().split())
angka=[]
x = 0
isi = list(map(int, input().split()))

for i in range (baris):
    angka.append(isi[x:x+kolom])
    x = x + kolom
for baris in angka:
    for isi in baris:
        print(isi, end=' ')
    print()