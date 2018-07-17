capacidade_total = 50

viagens = int(raw_input())

while (viagens > 0):
    pacotes = int(raw_input())

    matriz = [[0 for x in range(capacidade_total)] for y in range(pacotes)]
    print(matriz)
    itens = {}

    while (pacotes > 0):
        item, peso = raw_input().split()
        item, peso = int(item), int(peso)
        itens[item] = peso

        pacotes = pacotes - 1

    for i in range(capacidade_total):
        j = 0
        for item, peso in itens.items():
            sobra = peso - i
            if (sobra >= 0):
                matriz[i][j] = peso
            else:
                matriz[i][j] = max(matriz[i][j - sobra] + peso, matriz[i-1][j])
            j = j+1
    print(matriz[-1][-1])

    viagens = viagens - 1
