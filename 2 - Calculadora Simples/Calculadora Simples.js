console.log("Bem-vindo à calculadora em Python\n");

operacao = document.getElementById("operacao");

primeiro_numero = document.getElementById("primeiro_numero").value;
segundo_numero = document.getElementById("segundo_numero").value;

if (operacao == 1) {
    console.log("Resultado: ", + (primeiro_numero + segundo_numero));
}
else if (operacao == 2) {
    console.log("Resultado: ", + (primeiro_numero - segundo_numero));
}
else if (operacao == 3) {
    console.log("Resultado: ", + (primeiro_numero * segundo_numero));
}
else if (operacao == 4) {
    console.log("Resultado: ", + (primeiro_numero / segundo_numero));
}