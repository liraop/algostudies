# -*- coding: utf-8 -*-
import unittest


### Existem três tipos de edições que podem ser executadas em strings: inserir um caractere, remover um caractere ou substituir um caractere. Dadas duas strings, escreva uma função para verificar se uma string pode se igualar à outra usando no máximo uma edição. Resolva com força bruta. Analise o custo do algoritmo proposto.

def comparaString(s1, s2):
        diferenca = abs(len(s1)-len(s2))

        if (diferenca > 1):
            return False

        if (s1 == s2):
            return True

        menor = s1 if len(s1) < len(s2) else s2

        diferentes = 0

        for i in range(0, len(menor)):
            if (s1[i] != s2[i]):
                diferentes += 1

        iguais = (len(menor) - diferentes)

        if (iguais + diferentes + 1 != len(menor)+1 or iguais == diferentes):
            return False
        else:
            return True



class Testes(unittest.TestCase):
	def test_Base(self):
		self.assertTrue(comparaString("pele","pele"))
		self.assertFalse(comparaString("aheuash","aheuasheuas"))

	def test_Passa(self):
		self.assertTrue(comparaString("pele","ple"))
		self.assertTrue(comparaString("pele","bele"))

	def test_Falha(self):
		self.assertFalse(comparaString("pele","beke"))
		self.assertFalse(comparaString("pExemplesiae","pele"))

if __name__ == '__main__':
    unittest.main()
