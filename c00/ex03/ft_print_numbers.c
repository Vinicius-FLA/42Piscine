#include <unistd.h>

void	ft_print_numbers(void)
{
	int numero = '0';
	while(numero <='9')
	{
		write(1, &numero,1);
		numero++;
	}

}

int main()
{
	ft_print_numbers();
	return(0);
}