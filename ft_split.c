/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsayed <balsayed@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:05:21 by balsayed          #+#    #+#             */
/*   Updated: 2025/12/09 19:05:25 by balsayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	wordscount(char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static size_t	wordlen(char *b, char c)
{
	size_t	len;

	len = 0;
	while (b[len] && b[len] != c)
		len++;
	return (len);
}

static void	*free_all(char **arr, size_t i)
{
	while (i > 0)
		free(arr[--i]);
	free(arr);
	return (NULL);
}

static char	*make_word(char const *s, char c, size_t *pos)
{
	size_t	len;
	char	*w;

	while (s[*pos] && s[*pos] == c)
		(*pos)++;
	len = wordlen((char *)s + *pos, c);
	w = malloc(len + 1);
	if (w)
		ft_strlcpy(w, s + *pos, len + 1);
	*pos += len;
	return (w);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	pos;
	size_t	wcount;
	char	**arr;

	i = 0;
	pos = 0;
	if (!s)
		return (NULL);
	wcount = wordscount((char *)s, c);
	arr = malloc((wcount + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (i < wcount)
	{
		arr[i] = make_word(s, c, &pos);
		if (!arr[i])
			return (free_all(arr, i));
		i++;
	}
	arr[i] = NULL;
	return (arr);
}