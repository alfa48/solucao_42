#include<unistd.h>
#include<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

void	ft_ultimate_ft(int *************nbr)
{
	*************nbr = 42;
}

void	ft_swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	a = *b;
	*b = temp;	
}
int main()
{
	int var;
	int *ptr;
	int **pptr;
	int ***ppptr;
	int ****pppptr;

	var = 67;
	ptr = &var;

	pptr = &ptr;
	
	printf("Endereco da variavel: %p \n", pptr);
	printf("valor: %d \n", **pptr);
}
