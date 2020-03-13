casa  = float(input("Digite o valor da casa a comprar: "))
salario  = float(input("Digite o valor do salario: "))
anos  = float(input("Digite a quantidade de anos a pagar: "))

valor = (casa/(12*anos))
limite = salario*0.3

if valor<=limite:
    print("O valor da prestacao da casa e igual: {}".format(valor))
else: 
    print("Nao e possivel fazer a compra da casa!")