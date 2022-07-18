print("Bem-vindo à calculadora em Python\n")

operacao = int(input("Escolha a operação aritmética:\nAdição(1), Subtração(2), Multiplicação(3), Divisão(4): "))

primeiro_numero = float(input("\nPrimeiro número: "))
segundo_numero = float(input("Segundo número: "))

if (operacao == 1):
    print("Resultado: {0}".format(primeiro_numero + segundo_numero))
elif (operacao == 2):
    print("Resultado: {0}".format(primeiro_numero - segundo_numero))
elif (operacao == 3):
    print("Resultado: {0}".format(primeiro_numero * segundo_numero))
elif (operacao == 4):
    print("Resultado: {0}".format(primeiro_numero / segundo_numero))