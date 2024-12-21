asli = input()
palsu = input()

g = 0  
z = 0 

if len(asli) != len(palsu):
    print('Panjang kalimat berbeda, pesan palsu')
else:
    for i in range(len(asli)):
        if asli[i] == ' ' and palsu[i] == ' ':
            print(' ', end='') 
        elif asli[i] == ' ' and palsu[i] == ' ':
            continue  
        elif asli[i] == palsu[i]:
            print('*', end='')
            g += 1
        else:
            print('#', end='')
            z += 1

    print('\n* = {}'.format(g))
    print('# = {}'.format(z))

    if g >= z:
        print('Pesan Asli')
    else:
        print('Pesan Palsu')