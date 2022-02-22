#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	
}

// Note that room for the NULL '\0' should be included in dstsize
// strlcat() appends string src to the end of dst  
// It will append at most dstsize - strlen(dst) - 1 characters
// It will then NULL-terminate
// UNLESS dstsize is 0 OR the original dst string was longer than dstsize
// strlcat() return's the total length of the string it tried to create
// If the src and dst strings overlap, the behavior is undefined