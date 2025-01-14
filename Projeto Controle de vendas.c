#include <stdio.h>  // Biblioteca para incluir comandos/operações básicas de entrada e saída de dados
#include <locale.h>  // Biblioteca para incluir configurações padrões regionais

int main() {
    setlocale(LC_ALL, "Portuguese");  // Comando para incluir a gramática BR no console e na programação

    //Declaração de variáveis
    int produto;
    float quantidade, total_venda = 0.0, valor_venda;  //
    float prec[] = {118.70, 95.80, 83.50, 60.0, 23.0, 15.0, 3.80, 1.70};  //Vetor para armazenar os preços unitários

    // Descrição dos produtos (char para caracteres)
    char* descricao[] = {
        "Areia fina", "Areia média", "Areia grossa", "Pedra brita",
        "Cal hidratada", "Cimento", "Areia fina", "Areia fina"
    };

    // Variáveis para controlar o valor de cada produto vendido
    float venda1 = 0.0, venda2 = 0.0, venda3 = 0.0, venda4 = 0.0, venda5 = 0.0, venda6 = 0.0, venda7 = 0.0, venda8 = 0.0;
    float quantidade_vendida1 = 0.0, quantidade_vendida2 = 0.0, quantidade_vendida3 = 0.0, quantidade_vendida4 = 0.0,
          quantidade_vendida5 = 0.0, quantidade_vendida6 = 0.0, quantidade_vendida7 = 0.0, quantidade_vendida8 = 0.0;

    //Uso do "for" para pegar os dados
    for (;;) {
        printf("\nInforme o Código do Produto e/ou para finalizar informe 0: ");
        scanf("%d", &produto);

        if (produto == 0) {
            break;  // Sai do loop se o código for 0
        }

        if (produto < 1 || produto > 8) {
            printf("\nErro: O código do produto deve ser entre 1 e 8.\n");
        }

            else {   // Uso do "else" para solicitar a quantidade vendida

            printf("Informe a quantidade vendida desse produto: ");  //Mensagem de texto para informar a quantidade
            scanf("%f", &quantidade);  //Armazenar os dados informados na variável "quantidade"

            //Cálculo do valor da venda
            if (quantidade > 0) {  // Calcular o valor da venda
                valor_venda = quantidade * prec[produto - 1];  //Alocando o resultado do cálculo na variável "valor_venda"

                total_venda = total_venda + valor_venda;  // Acumular o valor de venda de cada produto na variável "total_venda"

                //Uso do "switch" para atualizar as variáveis específicas de cada produto
                switch(produto) {
                    case 1:
                        venda1 += valor_venda;
                        quantidade_vendida1 += quantidade;
                        break;

                    case 2:
                        venda2 += valor_venda;
                        quantidade_vendida2 += quantidade;
                        break;

                    case 3:
                        venda3 += valor_venda;
                        quantidade_vendida3 += quantidade;
                        break;

                    case 4:
                        venda4 += valor_venda;
                        quantidade_vendida4 += quantidade;
                        break;

                    case 5:
                        venda5 += valor_venda;
                        quantidade_vendida5 += quantidade;
                        break;

                    case 6:
                        venda6 += valor_venda;
                        quantidade_vendida6 += quantidade;
                        break;

                    case 7:
                        venda7 += valor_venda;
                        quantidade_vendida7 += quantidade;
                        break;

                    case 8:
                        venda8 += valor_venda;
                        quantidade_vendida8 += quantidade;
                        break;
                }
            }

            else {  //"else" para exibir uma mensagem de erro
                printf("\nErro: A quantidade vendida deve ser maior que zero.\n");
            }
        }
    }

    //Exibir as informações de vendas
    printf("\n\n---------RELATÓRIO---------\n\n");  //Título

    if (quantidade_vendida1 > 0) {
        printf("\nCódigo do produto: 1 (%s)", descricao[0]);
        printf("\nQuantidade vendida: %.1f", quantidade_vendida1);
        printf("\nValor total de venda: R$ %.2f\n", venda1);
    }

    if (quantidade_vendida2 > 0) {
        printf("\nCódigo do produto: 2 (%s)", descricao[1]);
        printf("\nQuantidade vendida: %.1f", quantidade_vendida2);
        printf("\nValor total de venda: R$ %.2f\n", venda2);
    }

    if (quantidade_vendida3 > 0) {
        printf("\nCódigo do produto: 3 (%s)", descricao[2]);
        printf("\nQuantidade vendida: %.1f", quantidade_vendida3);
        printf("\nValor total de venda: R$ %.2f\n", venda3);
    }

    if (quantidade_vendida4 > 0) {
        printf("\nCódigo do produto: 4 (%s)", descricao[3]);
        printf("\nQuantidade vendida: %.1f", quantidade_vendida4);
        printf("\nValor total de venda: R$ %.2f\n", venda4);
    }

    if (quantidade_vendida5 > 0) {
        printf("\nCódigo do produto: 5 (%s)", descricao[4]);
        printf("\nQuantidade vendida: %.1f", quantidade_vendida5);
        printf("\nValor total de venda: R$ %.2f\n", venda5);
    }

    if (quantidade_vendida6 > 0) {
        printf("\nCódigo do produto: 6 (%s)", descricao[5]);
        printf("\nQuantidade vendida: %.1f", quantidade_vendida6);
        printf("\nValor total de venda: %.2f\n", venda6);
    }

    if (quantidade_vendida7 > 0) {
        printf("\nCódigo do produto: 7 (%s)", descricao[6]);
        printf("\nQuantidade vendida: %.1f", quantidade_vendida7);
        printf("\nValor total de venda: R$ %.2f\n", venda7);
    }

    if (quantidade_vendida8 > 0) {
        printf("\nCódigo do produto: 8 (%s)", descricao[7]);
        printf("\nQuantidade vendida: %.1f", quantidade_vendida8);
        printf("\nValor total de venda: R$ %.2f\n", venda8);
    }

    //Exibir o valor total das vendas no dia
    printf("\nValor total das vendas no dia: R$ %.2f\n", total_venda);
    printf("\n---------------------------\n\n");

    return 0;  //"return 0" para finalização "correta" do programa
}