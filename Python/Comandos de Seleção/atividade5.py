operacao = int(input("1-soma;\n2-subtracao;\n3-multiplicacao;\n4-divisao;\nDigite a operacao desejada: "))
num1 = float(input("Digite o primeiro numero: "))
num2 = float(input("Digite o segundo numero: "))

if operacao == 1:
    total = num1+num2
elif operacao == 2:
    total = num1-num2
elif operacao == 3:
    total = num1*num2
elif operacao == 4: 
    total = num1/num2
print("o valor total da operacao e: {}".format(total))