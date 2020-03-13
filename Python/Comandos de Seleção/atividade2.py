print ("Digite tres numeros distintos: ")
num1 = float(input("Digite o primeiro numero: "))
num2 = float(input("Digite o segundo numero: "))
num3 = float(input("Digite o terceiro numero: "))

if num1>num2 and num1>num3 and num2>num3:
    print ("O numero {} e o maior e o numero {} e o menor".format(num1,num3))
elif num1>num2 and num1>num3 and num3>num2:
    print ("O numero {} e o maior e o numero {} e o menor".format(num1,num2))
elif num2>num1 and num2>num3 and num1>num3:
    print ("O numero {} e o maior e o numero {} e o menor".format(num2,num3))
elif num2>num2 and num2>num3 and num3>num1:
    print ("O numero {} e o maior e o numero {} e o menor".format(num2,num1))
elif num3>num2 and num3>num1 and num1>num2:
    print ("O numero {} e o maior e o numero {} e o menor".format(num3,num2))
elif num3>num2 and num3>num1 and num2>num1:
    print ("O numero {} e o maior e o numero {} e o menor".format(num3,num1))
else:
    print ("Digite tres valores diferentes!")

