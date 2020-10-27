#include "h.h"

int main()
{
	char *MotsMystere = "COUCOU";
	char *MotsCacher = "******";
	char *Malettre;
	int nombre_coup = 10;
	int *fin_du_game = 0;
	ft_putstr("\n Bonjours à toute et à tous.\n/nBienvenue au jeux du Pendu.\n ");
	ft_putstr("\nLa Partie va commencer... \n\nVous avez");
	ft_put_nbr(nombre_coup);
	ft_putstr(" coup pour trouver le mots mystere bonne chance. \n");

	while (fin_du_game != 1)
	{
		ft_putstr("Veulliez entrez une lettre");

		*Malettre = lireCaractere();
		Check_lettre(Malettre, MotsMystere, MotsCacher), &nombre_coup;
		fin_du_game = Win_game(nombre_coup, MotsMystere, MotsCacher);
	}
}