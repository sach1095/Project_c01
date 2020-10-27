#include "dico.h"

int		ft_samestr(char *s1, char *s2)
{
	int i = 0;
	while (s1[i])
	{
		while (s1[i] == s2[i])
		{
			if (s1[i] == '\0' && s2[i] == '\0')
				return (1);
			i++;
		}
		return (0);
	}
	return (0);
}

int		Check_lettre(char Malettre, char *MotsMystere, char *MotsCacher, int nombre_coup)
{
	int i = 0;
	int b_lettre = 0;
	while (MotsMystere[i])
	{
		if (Malettre == MotsMystere[i])
		{
			b_lettre = 1;
			MotsCacher[i] = Malettre;
		}
		i++;
	}

	if (b_lettre != 0)
	{
		ft_putstr("Bravo la lettre se trouve bien dans le mots mystere.\n");
	}
	else
	{
		nombre_coup--;
		ft_putstr("Perdu la lettre ne se trouve pas dans le mots mystere.\n\nIl vous reste ");
		ft_put_nbr(nombre_coup);
		ft_putstr(" tentative restante.\n");
	}
	return (nombre_coup);
}

int		Win_game(int nbc, char *MotsMystere, char *MotsCacher)
{
	if (nbc == 0)
	{
		ft_putstr("\nVous avez Perdu retenter votre chance la prochaine fois");
		ft_putstr("\nLe Mots Mystere etait : ");
		ft_putstr(MotsMystere);
		ft_putstr("\n");
		return (1);
	}
	else if ((ft_samestr(MotsMystere, MotsCacher) == 1))
	{
		ft_putstr("\nBravos vous avez trouver le most mystere.\n\nC'etait bien :");
		ft_putstr(MotsCacher);
		ft_putstr("\n");
		return (2);
	}
	else
		return (0);
}