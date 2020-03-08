print ("Ola")
x = int(input ("Digite 1 para conversao de decimal para binario\nDigite 0 para conversao de binario para decimal\n"))

if x == 0:
    binario = (input ("digite o valor binario a ser convertido: ")) #Entrada do valor binário em uma string
    converter = int ((binario),2) #converção da string em um inteiro (O 2 diz ao Python que o valor é uma base dois, ou seja, um número binário.)
    valorDec = float(converter)
    print ("O valor decimal correspondente e :")
    print(valorDec)

if x == 1:
    decimal = (int(input ("Digite o valor decimal a ser convertido: ")))
    valorBin = "{0:b}".format(decimal) #Elimina o prefixo 0b (que aparece quando usa o bin) quando imprime o valor 
    print ("O valor binario correspondente e :")
    print (valorBin)

if (x != 1 and x != 0):
    print ("Valor digitado incorreto")
   
