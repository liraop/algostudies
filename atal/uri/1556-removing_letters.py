entrada = raw_input()

palavra = ""

for i in range(0, len(entrada)):
    palavra = ""
    for j in range(0, len(entrada)):
        for k in range(0, len(entrada)):
            if ( i == j and j == k):
                palavra += entrada[i]
            if (j > i and j <=k):
                palavra += entrada[j]
            if (k > j and k > i):
                palavra += entrada[k]


        print(palavra)
