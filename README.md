# Projeto: Sistema de Controle de Vendas de Materiais de Construção

#Descrição

&emsp; Este projeto implementa um sistema de controle de vendas para uma loja de materiais de construção, utilizando a linguagem C. O programa permite que o usuário registre as vendas de oito tipos diferentes de produtos, incluindo areia e cimento, com a opção de inserir o código do produto e a quantidade vendida.

##Funcionalidades

- O programa permite o cadastro contínuo de vendas, onde o usuário pode inserir o código do produto (de 1 a 8) e a quantidade vendida.
- O sistema valida os dados inseridos, como o código do produto e a quantidade, garantindo que as informações estejam dentro dos limites definidos.
- A cada venda registrada, o programa calcula o valor total da venda, com base no preço unitário de cada produto armazenado em um vetor.
- Ao final, o sistema exibe um relatório detalhado com informações sobre os produtos vendidos, como código do produto, descrição, quantidade vendida e o valor total das vendas de cada item.
- Além disso, o programa fornece o valor total das vendas do dia.

##Estrutura do Código

-Bibliotecas utilizadas:
&emsp; -<stdio.h>: Para operações de entrada e saída de dados.
&emsp; -<locale.h>: Para configurar o idioma do programa para o português brasileiro.

-Estruturas e variáveis:
&emsp; -O código utiliza um vetor para armazenar os preços dos produtos e um array de strings para as descrições de cada item.
&emsp; -Vários controles de vendas (como o valor total de cada produto vendido e a quantidade) são atualizados utilizando estruturas condicionais e de repetição (como if, switch, for).

##Como usar
1. Compile e execute o código
2. Insira o código do produto (1 a 8) e a quantidade vendida.
3. O programa continuará registrando as vendas até que o código 0 seja informado para finalizar.
4. Após finalizar, o sistema exibirá um relatório com as informações detalhadas sobre as vendas realizadas.
