
/// exercício 1 -> faça um programa que peça dois números e verifique (usando if
/// e else) e imprima o maior deles

#include <iostream>
using namespace std;

/// criando a função principal do programa
int main() {
  /// chamando a biblioteca "locale" para usar as acentuações dentro do programa
  setlocale(LC_ALL, "pt_br. UTF-8");

  /// declando a variável dos números e um char, para ser usado caso o usuário
  /// ou desejar continuar o programa, ou acaba-ló

  int num1, num2, i;
  char op[0];
  char op2;
  /// criando uma estrutura de repetição para ser usada no switch mais tarde.
  for (i = 0; i < 1; i++) {
    cout << "\ndigite primeiro número: \n";
    cin >> num1;
    cout << "\ndigite o segundo número: \n";
    cin >> num2;

    system("clear||cls");

    /// declarando as estruturas condicionais (if e else) para a comparação de
    /// maior quer, menor quer e igualdade entre os números que o usuário
    /// digitou
    if (num1 > num2) {
      cout << num1 << " é maior que " << num2 << "\n";
    } else if (num1 < num2) {
      cout << num1 << " é menor que " << num2 << "\n";
    } else if (num1 == num2) {
      cout << "\nos números digitados são iguais\n";
    }

    /// perguntando ao usuário se ele irá querer continuar com o programa.
    cout << "\nquer continuar? [S/N]\n";
    cin >> op[0];
    /// deixando o que o usuário digitou em minúsculo.
    op[0] = tolower(op[0]);

    /// limpando o terminal
    system("clear || cls");

    /// foi criado uma estrutura de seleção para a resposta que o usuário irá,
    /// querendo ou terminar ou continuar com o programa
    switch (op[0]) {
    /// se sim, o programa é continuado e volta para o início do loop
    case 's':
      continue;
    case 'n':
      /// se não, o programa e finalizado e é agredecido ao usuário pelo uso
      cout << "fim do programa\nobrigado por utilizar os serviços da jj-software ;)";
      break;
    }
  }
  /// fim do programa
  return 0;
}
