#ifndef H_H
# define H_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>

//Basic_fonction :

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_put_nbr(int nbr);
int	ft_strcmp(char *s1, char *s2);
char 	lireCaractere();

// Check_fonction
int		Check_lettre(char Malettre, char *MotsMystere, char *MotsCacher, int nombre_coup);
int		Win_game(int nbc, char *MosMystere, char *MotsCacher);

char	*Choix_Mots();
char 	*lecture_list();
int		count_words(char *dico);
char	**ft_malloc(char *str, int size);
char	*Cache_mots(char *MotsMystere);

#endif