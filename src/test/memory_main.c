// Tests for the functions in memory.c
#include "../../pushswap.h"
#include <stdlib.h>

//* Test for free_charr
int	main(void)
{
	char	str[] = "6543 6654 222 1211 33";
	char	**split;

	split = ft_split(str, ' ');
	free_charr(split, ft_nwrds(str, ' '));
	return (0);
}
//*/
