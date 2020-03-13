salario = float(input("Qual o salario do funcionario: "))
if salario>1250:
    aumento = salario*0.1
else:
    aumento = salario*0.15

print("O valor do aumento do funcionario e: {}".format(aumento))
