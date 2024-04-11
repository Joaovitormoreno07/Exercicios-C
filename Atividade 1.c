int main() {
int num1, num2, num3;

// Leitura dos três números
printf("Digite o primeiro número: ");
scanf("%d", &num2);
printf("Digite o segundo número: ");
scanf("%d", &num2);
printf("Digite o terceiro número: ");
scanf("%d", &num3);

// Armazenando o menor valor
int menor = num1;
if (num2 < menor) {
menor = num2;
}
if (num3 < menor) {
menor = num3;
}

// Exibindo o menor valor
printf("O menor número é: %d\n", menor);

return 0;
}
