// Tests for the functions in checkers.c
#include "../../pushswap.h"
#include <stdlib.h>
#include <string.h>

/* Test for isarrnumeric
// run: cc checkers_main.c ../checkers.c ../memory.c ../numbers.c ../indiv_checkers.c ../../libft/libft.a
int	main(void)
{
	char	str1[] = "Dude Hello How Are You Goodbye";
	char	str2[] = "+123 -432 2342+ 22124-";
	char	str3[] = "+123 -432 2342 -22124";
	char	**charr1;
	char	**charr2;
	char	**charr3;

	charr1 = ft_split(str1, ' ');
	charr2 = ft_split(str2, ' ');
	charr3 = ft_split(str3, ' ');
	ft_printf("Non: %d\n", isarrnumeric(charr1, ft_nwrds(str1, ' ')));
	ft_printf("Semi: %d\n", isarrnumeric(charr2, ft_nwrds(str2, ' ')));
	ft_printf("Valid: %d\n", isarrnumeric(charr3, ft_nwrds(str3, ' ')));
	free(charr1);
	free(charr2);
	free(charr3);
	return (0);
}
//*/

/* Test for isarrint
// run: cc checkers_main.c ../checkers.c ../memory.c ../numbers.c ../indiv_checkers.c ../../libft/libft.a
int	main(void)
{
	char	str1[] = "Dude Hello How Are You Goodbye";
	char	str2[] = "+123 -432 2342+ 22124-";
	char	str3[] = "+123 -432 2342 -2147483648 2147483648";
	char	str4[] = "+123 -432 2342 -22124 2147483647 -2147483648";
	char	**charr1;
	char	**charr2;
	char	**charr3;
	char	**charr4;

	charr1 = ft_split(str1, ' ');
	charr2 = ft_split(str2, ' ');
	charr3 = ft_split(str3, ' ');
	charr4 = ft_split(str4, ' ');
	ft_printf("Non: %d\n", isarrint(charr1, ft_nwrds(str1, ' ')));
	ft_printf("Semi: %d\n", isarrint(charr2, ft_nwrds(str2, ' ')));
	ft_printf("Too big: %d\n", isarrint(charr3, ft_nwrds(str3, ' ')));
	ft_printf("Valid: %d\n", isarrint(charr4, ft_nwrds(str4, ' ')));
	free_split(charr1);
	free_split(charr2);
	free_split(charr3);
	free_split(charr4);
	return (0);
}
//*/
