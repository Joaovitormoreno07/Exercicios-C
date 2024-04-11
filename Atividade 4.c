int main() {
  int ladoA, ladoB, ladoC;

  // Leitura dos lados do triângulo
  printf("Digite o valor do lado A: ");
  scanf("%d", &ladoA);
  printf("Digite o valor do lado B: ");
  scanf("%d", &ladoB);
  printf("Digite o valor do lado C: ");
  scanf("%d", &ladoC);

  // Verificação da validade do triângulo
  if (ladoA + ladoB <= ladoC || ladoA + ladoC <= ladoB || ladoB + ladoC <= ladoA) {
    printf("Os valores informados não formam um triângulo!\n");
    return 1;
  }

  // Classificação do triângulo
  if (ladoA == ladoB && ladoB == ladoC) {
    printf("O triângulo é equilátero!\n");
  } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
    printf("O triângulo é isósceles!\n");
  } else {
    printf("O triângulo é escaleno!\n");
  }

  return 0;
}
