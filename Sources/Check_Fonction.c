#include "h.h"

void	Check_lettre(char Malettre, char *MotsMystere, char *MotsCacher, int *nombre_coup)
{
	i = -1;
	int b_lettre = 0;
	while (MotsMystere[++i])
	{
		if (Malettre == MotsMystere[i])
		{
			b_lettre++;
			MotsCacher[i] == Malettre;
		}
	}
	if (b_lettre != 0)
	{
		ft_putstr("Bravo la lettre se trouve bien dans le mots mystere.\n le mots mots cacher devient :");
		ft_putstr(MotsCacher);
	}
	else
	{
		ft_putstr("Perdu la lettre ne se trouve pas dans le mots mystere. \n");
		*nombre_coup--;
	}
}

int		Win_game(int nbc, char *MotsMystere, char *MotsCacher)
{
	if (nbc == 0)
	{
		ft_putstr("\nvous avez Perdu retenter votre chance la prochaine fois");
		return (1);
	}
	else if ((ft_strcmp(MotsMystere, MotsCacher) == 0))
	{
		ft_putstr("\nBravos vous avez trouver le most mystere.\n\n C'etait bien :");
		ft_putstr(MotsCacher);
		ft_putstr("\n");
		return (1);
	}
	else
		return (0);
}