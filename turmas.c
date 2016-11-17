#include <stdio.h>

void quick(int vet[], int esq, int dir)
{
	int pivo = esq, i, ch, j; //Declaração das variavés e inicialização do pivo com o primeiro algarismo da sequencia
	for (i = esq + 1; i <= dir; i++) //Percorre todos os espaços do vetor
	{
		j = i; //atribuição de valor
		if (vet[j] < vet[pivo]) //verifica se o vetor da posição pivo é maior que de outra posição
		{
			ch = vet[j]; //ch recebe o valor que é menor
			while (j > pivo) //repete enquanto o j que é a posição do algarismo menor que o pivo ficar na posição 0
			{
				vet[j] = vet[j - 1]; //reorganiza a posição de vetores
				j--; //decremento para a organização
			}
			vet[j] = ch; // atribuição da variavel menor que o pivo na posição inicial
			pivo++; // aumenta a posição do pivo em uma unidade
		}
	}
	if (pivo - 1 >= esq) // verifica se o valor do pivo é maior que o final do vetor.
	{
		quick(vet, esq, pivo - 1); //final da execursão da função
	}
	if (pivo + 1 <= dir) //verifica se o valor do pivo é menor, indicando que ainda estar dentro das limitações do vetor
	{
		quick(vet, pivo + 1, dir); //chama a função para eecutar novamente
	}
}

void main() 
{
	int N, i, j, matriz[50][3], vector[100], nCourses, nClasses, flag;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}

	for (i = nClasses = 0; i < N; i++)
	{
		vector[i] = matriz[i][0];

		for (j = 0, flag = 1; j < i; j++)
		{
			if (matriz[i][0] == matriz[j][0] && matriz[i][1] == matriz[j][1])
			{
				flag = 0;
				break;
			}
		}

		if (flag)
		{
			nClasses++;
		}
	}

	quick(vector, 0, N - 1);

	printf("Cursos:");
	for (i = 0; i < N; i++)
	{
		if (i == 0 || vector[i] != vector[i - 1])
		{
			printf("%d;", vector[i]);
		}
	}

	printf("\nNumTurmas:%d;\n", nClasses);
}