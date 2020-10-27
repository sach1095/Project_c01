#include "dico.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}



void	ft_put_nbr(int nbr)
{
	long int nb = nbr;

	if (nb < 0)
	{
		ft_putstr("-");
		nb *= -1;
	}
	if (nb > 9)
		ft_put_nbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

char lireCaractere() 
{ 
    char caractere = 0;
 
    caractere = getchar(); // On lit le premier caractère
    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas déjà
 
    // On lit les autres caractères mémorisés un à un jusqu'au \n (pour les effacer) 
    while (getchar() != '\n');
 
    return (caractere);
}


int	ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] && s2[x])
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (s1[x] - s2[x]);
}