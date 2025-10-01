#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			j;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	j = 1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		j = -1;
		d += n - 1;
		s += n - 1;
	}
	while (i < n)
	{
		*d = *s;
		d += j;
		s += j;
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
int main (void)
{
	char	src[50] = "1234";
	char	*dest = &src[4];

	strcpy(dest, "Salut");
	ft_memmove(dest, src, 6);
	printf("src: %s\n", src); // Affiche le contenu de src
    printf("dest: %s\n", dest); // Affiche le contenu de dest

    return 0;
}