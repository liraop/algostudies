# -*- coding: utf-8 -*-
import unittest

def achaTexto(txt,substring):
	achou = False

	for i in range(0, len(txt)):
		if (txt[i] == substring[0]):  			## checa se a primeira letra é igual
			tamanho_ss = len(substring)
			for j in range(i, min(tamanho_ss, len(txt[i:len(txt)-1]))): 		## percorre tamanho da substring 
				for k in range(i, j): 		## testa se acha substring completa
					if (txt[k] != substring[k]):
						i += 1
						achou = False
	return achou
						


class Testes(unittest.TestCase):
	chave = "bzbzbzu"
	textao1 = "kvjlixapejrbxeenpbzphkhthbkwyrwamnugzhppfxiyjyanhapfwbzubghxmshrlyujfjhrsovk vveylnbxnawavggfdfggrzizyvmfohigeabgkszfnbkmffbzbzxjffqbualeytqrphyrbjqdjqavctg xjifqgfgydhoiwhrvwqbxgrixydzbpzjnhopvlazbzumzhhfavoctdfytvvggikngkwzibzbzbzuxgj tlxkojlefilbrboignbzsudssvqynbzuapbpqvlubdoyxkkwhcoudvtkmikbzbzansgsutdjythzl"
	textao2 = "este texto nao tem bzbzbz"
	textao3 = "este bzbzbzu tem a chave"
	textao4 = "kvjlixapejrbxeenpbzphkhthbkwyrwamnugzhppfxiyjyanhapfwbzubghxmshrlyujfjhrsovk vveylnbxnawavggfdfggrzizyvmfohigeabgkszfnbkmffbzbzxjffqbualeytqrphyrbjqdjqavctg xjifqgfgydhoiwhrvwqbxgrixydzbpzjnhopvlazbzumzhhfavoctdfytvvggikngkwzibzbzbzxgj tlxkojlefilbrboignbzsudssvqynbzuapbpqvlubdoyxkkwhcoudvtkmikbzbzansgsutdjythzl"
	
	def test_casoBase(self):
		self.assertTrue(achaTexto(self.__class__.textao3, self.__class__.chave))
		self.assertFalse(achaTexto(self.__class__.textao2, self.__class.chave))
	
	def test_Passa(self):
		self.assertTrue(achaTexto(self.__class__.textao1, self.__class__.chave))

	def test_Falha(self):
		self.assertFalse(achaTexto(self.__class__.textao4, self.__class__.chave))

if __name__ == '__main__':
	unittest.main()
