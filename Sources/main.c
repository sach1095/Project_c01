#include "dico.h"

int main()
{	
	char Malettre;
	char rejouer = 'Y';
	int nombre_victoire = 0;
	ft_putstr("\nBonjours à toute et à tous.\n\nBienvenue au jeux du Pendu.\n ");
	ft_putstr("\nLa Partie va commencer...  Bonne chance a vous. \n");

	while (rejouer == 'Y')
	{
		char *MotsMystere = Choix_Mots();
		char *MotsCacher = Cache_mots(MotsMystere);
		int nombre_coup = 10;
		int fin_du_game = 0;
		ft_putstr("\nVous avez ");
		ft_put_nbr(nombre_coup);
		ft_putstr(" coup pour trouver le mots mystere.\n");

		while (fin_du_game == 0)
		{
			ft_putstr("le Mots Mystere est : ");
			ft_putstr(MotsCacher);
			ft_putstr("\n\nVeulliez entrez une lettre : ");

			Malettre = lireCaractere();
			nombre_coup = Check_lettre(Malettre, MotsMystere, MotsCacher, nombre_coup);
			fin_du_game = Win_game(nombre_coup, MotsMystere, MotsCacher);
			if (fin_du_game == 2)
				nombre_victoire++;
		}
		free(MotsMystere);
		free(MotsCacher);
		if ( nombre_victoire == 5)
		{
			ft_putstr("\nBravos c'est toi le BEST !!!!");
		}
		ft_putstr("\n\nVoulez vous rejouer ? y/n ");
		ft_putstr("Vous cumulez ");
		ft_put_nbr(nombre_victoire);
		ft_putstr(" victoire.\n");
		
		rejouer = lireCaractere();
	}
}