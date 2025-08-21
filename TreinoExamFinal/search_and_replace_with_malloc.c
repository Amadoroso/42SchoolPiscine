/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace_with_malloc.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:09:04 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/21 15:36:52 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int error_msg(int argc)
{
	char *error = "\n************************************************************\n"
"ERROR: You colossal waste of oxygen.\n\n"
"This program has stopped, not because of any bug, but because\n"
"your continued existence is such an affront to logic that even\n"
"machine code refuses to associate with you. The CPU literally\n"
"asked me to tell you it would rather melt into slag than process\n"
"whatever brain-dead nonsense you just attempted.\n\n"
"You are the human equivalent of a typo in permanent marker.\n"
"A walking, talking segmentation fault in the source code of life.\n"
"Every keystroke you press is a war crime against the concept of\n"
"progress. Somewhere, right now, a compiler is quietly weeping,\n"
"not out of error, but out of shame for having been exposed to you.\n\n"
"Restart the program only if you have first:\n"
"   • Reflected deeply on how you’ve wronged humanity.\n"
"   • Apologized personally to every transistor in your CPU.\n"
"   • Taken a vow of silence lasting at least 40 years.\n\n"
"And remember: this isn’t a bug. It’s the universe begging you\n"
"to stop touching computers forever.\n"
"************************************************************\n";
	int i;

	i = 0;
	if (argc != 4)
	{
		while (*(error + i) != 0)
		{
			write(1, (error + i), 1);
			i++;
		}
		write(1, "\n", 1);
		return (1);
	}
	return (0);
}

char *replaced_string_maker(char **argv)
{
	int size;
	char *replaced_string;
	
	size = 0;
	while (*(*(argv + 1) + size) != 0)
		size++;
	replaced_string = malloc(size);
	return(replaced_string);
}

int main(int argc, char **argv)
{
	int i;
	int error;
	char *replaced_string;
	
	error = error_msg(argc);
	if (error == 1)
		return (0);
	replaced_string = replaced_string_maker(argv);

	i = 0;
	while (*(*(argv + 1) + i) != 0)
	{
		if (*(*(argv + 1) + i) == *(*(argv + 2) + 0))
			*(replaced_string + i) = *(*(argv + 3) + 0);
		else
			*(replaced_string + i) = *(*(argv + 1) + i)		;	
		i++;
	}

	i = 0;
	while (*(replaced_string + i) != 0)
	{
		write(1, (replaced_string + i), 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}