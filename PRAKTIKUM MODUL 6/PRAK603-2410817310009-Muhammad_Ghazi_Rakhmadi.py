g, z = map(int, input().split())
if (g != z):
    print('Jumlah tidak sama')
else:
    barisx = list(map(int, input().split()))
    barisy = list(map(int, input().split()))
    for i in range (g):
        print(barisx[i] * barisy[i], end=' ')