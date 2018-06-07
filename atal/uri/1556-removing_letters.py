# -*- coding: utf-8 -*-

def gera_combs(array):
    candidatos = array[:]
    combinacoes = ""

    while (candidatos):
        combinacao = ""
        for i in range(0, len(candidatos)):
            combinacao += candidatos[i]

        combinacoes += combinacao
        combinacoes += ""
        candidatos.pop()

    return combinacoes

entrada = list("HUEHUE")
caminhos = []

for i in range(0, len(entrada)):
    print(gera_combs(entrada[i:]))
