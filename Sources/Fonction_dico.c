#include "dico.h"

char *lecture_list()
{
	char buff[2];
	int fd;
	int size = 1;
	int i = 0;
	char *list;
	
	if (!(fd = open("Dico", O_RDONLY)))
		return (0);
	while (size > 0)
	{
		size = read(fd, buff, 1);
		i += size;
	}
	close(fd);
	size = 1;
	if (!(list = (char *)malloc(sizeof(char)* (i + 1))))
		return (NULL);
	fd = open("Dico", O_RDONLY);
	size = read(fd, list, i);
	list[i] = '\0';
	close(fd);
	return (list);
}

int		count_words(char *dico)
{
	int i = 0;
	int ligne = 0;
	while (dico[i])
	{
		if (dico[i] == '\n')
			ligne++;
		i++;
	}
	return (ligne);
}

char	**ft_malloc(char *str, int size)
{
	int x = 0;
	char **dest;
	if (!(dest = (char **)malloc(sizeof(char *) * (size + 1))))
		return (0);
	while (x != size)
	{
		if (!(dest[x] = (char *)malloc(sizeof(char)* (ft_strlen(str) + 1))))
			return (0);
		x++;
	}
	if (!(dest[x] = (char *)malloc(sizeof(char))))
		return (0);
	dest[x] = 0;
	return (dest);
}

char	*Choix_Mots()
{
	int i = -1;
	int x = 0;
	int y = 0;
	char *dico = lecture_list();
	int size_l = count_words(dico);
	char **dico_2;
	dico_2 = ft_malloc(dico, size_l);
	while (dico[++i])
	{
		while (dico[i++] != '.');
		while (dico[i] != '\n')
			dico_2[x][y++] = dico[i++];
		y = 0;
		x++;
	}
	x = 0;
	const int MAX = 35, MIN = 0;
    srand(time(NULL));
    x = (rand() % (MAX - MIN + 1)) + MIN;

	return (dico_2[x]);
}

char	*Cache_mots(char *MotsMystere)
{
	int i = 0;
	char *dest;
	dest = (char *)malloc(sizeof(char)* (ft_strlen(MotsMystere) + 1));
	int x = ft_strlen(MotsMystere);
	while (i != x)
		dest[i++] = '*';
	dest[i] = '\0';
	return (dest);
}