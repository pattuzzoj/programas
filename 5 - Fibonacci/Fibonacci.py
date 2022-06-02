def informarPosicao():
    posicao = int(input("Posição: "))

    while posicao <= 0:
        print("Insira uma posição válida.\n")
        posicao = int(input("Posição: "))

    fibonacci(posicao)


def fibonacci(posicao):
    fibo = fibo1 = 1
    fibo2 = 0

    for i in range(1, posicao + 1):
        fibo = fibo1 + fibo2
        fibo2 = fibo1
        fibo1 = fibo

    print(f"\nO número de fibonacci na posição {posicao} é:", fibo)

    recomecar = input("\nGostaria de informar uma nova posição? ").lower()

    while recomecar != "sim" and recomecar != "não":
        print("Digite 'sim' ou 'não'.")
        recomecar = input("\nGostaria de informar uma nova posição? ").lower()

    if recomecar == "sim":
        informarPosicao()
    else:
        print("\nObrigado por utilizar o nosso programa.")
        pass


informarPosicao()
