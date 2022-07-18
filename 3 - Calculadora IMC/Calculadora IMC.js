alert("Bem-vindo à calculadora IMC em JavaScript");
alert("Digite os dados requeridos: peso, altura");

let peso = parseFloat(prompt("Peso:", ''));
let altura = parseFloat(prompt("Altura:", ''));

alert(`IMC: ${peso / (altura * altura)}`);