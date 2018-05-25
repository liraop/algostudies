# -*- coding: utf-8 -*-
import unittest


### Existem três tipos de edições que podem ser executadas em strings: inserir um caractere, remover um caractere ou substituir um caractere. Dadas duas strings, escreva uma função para verificar se uma string pode se igualar à outra usando no máximo uma edição. Resolva com força bruta. Analise o custo do algoritmo proposto.

def comparaString(s1, s2):
        diferenca = abs(len(s1)-len(s2))
        if(diferenca > 1):
            return False
        else:
            falta = 0
            if (diferenca == 1): falta += 1 			## se precisar inserir uma
 
            for i in range(0, min(len(s1),len(s2))): 
                if (s1[i] != s2[i]): falta += 1 		## se existir alguma diferença
 		
            return (falta <= 1)


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
