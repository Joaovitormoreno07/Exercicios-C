int main() {
  float celsius, fahrenheit;

  // Leitura da temperatura em Celsius
  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &celsius);

  // Conversão de Celsius para Fahrenheit
  fahrenheit = celsius * (9.0 / 5.0) + 32.0;

  // Exibição da temperatura em Fahrenheit
  printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

  return 0;
}
