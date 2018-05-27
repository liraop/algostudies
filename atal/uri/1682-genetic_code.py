# -*- coding: utf-8 -*-

laco = True
while (laco):
    entrada = int(input())
    if (entrada == 0): laco = False

    sequencia = ["N"]

    for i in range(0, entrada):
        if (sequencia[i] == "N"):
            sequencia.append("O")
        
