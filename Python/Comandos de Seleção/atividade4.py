distancia = float(input("Qual distancia deseja percorrer: "))
if distancia<=200:
    passagem = 0.5*distancia
else:
    passagem = 0.45*distancia
print ("O valor da passagem e igual a: {}".format(passagem))
