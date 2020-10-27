#ifndef H_H
# define H_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// déclaration de ma var i qui me permet de parcourir toutes mes boucles ou chaine de caractère au besoin.
int i;

//Basic_fonction :

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_put_nbr(int nbr);
int	ft_strcmp(char *s1, char *s2);
char 	lireCaractere();

// Check_fonction
void	Check_lettre(char Malettre, char *MotsMystere, char *MotsCacher, int *nombre_coup);
int		Win_game(int nbc, char *MosMystere, char *MotsCacher);

#endif