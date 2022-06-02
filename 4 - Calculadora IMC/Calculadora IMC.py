print("Bem-vindo à calculadora IMC em Python\n")
print("Digite os dados abaixo:\n")

peso = float(input("Peso: "))
altura = float(input("Altura: "))

print("\nIMC: {:.1f}".format(peso / (altura * altura)))
