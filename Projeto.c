#include <stdio.h>

int calcularPreco(int volume, int preco)
{
    int custo = preco * volume;
    return custo;
}

int calcularVolAgua(int volume, int litros)
{
    int agua = litros * volume;
    return agua;
}

int obterVolumeConcreto()
{
    int vol;
    printf(" insira o valor do volume\n");
    scanf("%d", &vol);
    return vol;
}

int obterResistencia(int valor)
{
    if (valor == 1)
    {
        return 400;
    }
    else if (valor == 2)
    {
        return 350;
    }
    else if (valor == 3)
    {
        return 298;
    }
    else if (valor == 4)
    {
        return 254;
    }
    else if (valor == 5)
    {
        return 228;
    }
    else if (valor == 6)
    {
        return 210;
    }
    else if (valor == 7)
    {
        return 100;
    }
    else
    {
        printf("Valor inserido inválido!!\n");
    }
}

int main()
{
    printf("===============================================================\n");
    printf("Integrantes do grupo: Julia Oliveira Drumond, Gabriel Camelo\n");
    printf("===============================================================\n\n");


    int matriz[7][3] = {{400, 320, 226}, {350, 280, 189}, {298, 250, 206}, {254, 210, 210}, {228, 190, 207}, {210, 180, 202}, {100, 150, 198}};
    int selecao;
    int vol;
    int resistencia;
    int preco;
    int litros;
    int custo;
    int agua;

    printf(" selecione um valor na tabela (de 1 a 7)\n");
    scanf("%d", &selecao);
    resistencia = obterResistencia(selecao);

    // Pegar valores da matriz com base na resistencia
    for (int i = 0; i < 7; i++)
    {
        if (matriz[i][0] == resistencia)
        {
            preco = matriz[i][1];
            litros = matriz[i][2];
            
        }
    }

    printf("\nvoce selecionou na tabela = %d %d %d\n\n", resistencia, preco, litros);
    vol = obterVolumeConcreto();

    custo = calcularPreco(vol, preco);
    printf("\ncusto total = %d\n\n", custo);

    agua = calcularVolAgua(vol, litros);
    printf("litros totais = %d\n\n", agua);


    return 0;
}