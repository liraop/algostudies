# -*- coding: utf-8 -*-

def remove_letra(palavra, visitados):
    candidatos = palavra.copy()

    while (candidatos):
        if (len(palavra) == 1):
            visitados.append(palavra[0])
        else:
            atual = palavra[0]
            no = ""
            for i in range(0, len(candidatos)):
                no += candidatos[i]

            visitados.append(no)
            remove_letra(candidatos[1:], visitados)

        candidatos.pop()

entrada = list("ABC")
combs = []
visitados = []

for i in range(0, len(entrada)):
    remove_letra(entrada[i:],visitados)

print(visitados)
