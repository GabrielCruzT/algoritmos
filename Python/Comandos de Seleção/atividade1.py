velocidade = float(input("Digite a velocidade do carro: "))
if velocidade>80:
    multa = 5*(velocidade-80)
    print ("Voce foi multado!\nValor da multa = {}".format(multa))
else:
    print ("Parabens voce nao foi multado!")

