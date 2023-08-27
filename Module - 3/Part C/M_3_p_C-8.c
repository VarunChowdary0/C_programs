/*
Compare the string
handling functions strcat()
and strncat().
*/

/*
strcat() - String Concatenate:

    Prototype: char *strcat(char *dest, const char *src);
    
    strcat() is used to concatenate (append) the contents of the 
    source string (src) to the end of the destination string (dest).
    It does not provide a way to limit the number of characters 
    copied from the source string, so it continues copying until 
    it encounters a null-terminator ('\0'), assuming that both src 
    and dest are null-terminated strings.
    It is prone to buffer overflow if the destination buffer is not 
    large enough to accommodate the concatenated result, potentially 
    leading to undefined behavior.\


strncat() - String Concatenate with Length Limit:

    Prototype: char *strncat(char *dest, const char *src, size_t n);

    strncat() is an improved version of strcat() that allows you to specify
    a maximum number of characters (n) to be copied from the source string
    (src) to the destination string (dest).

    It ensures that the destination buffer doesn't overflow by limiting the 
    number of characters copied to the minimum of n and the length of the source string.
    The concatenated result will always be null-terminated, even if fewer than 
    n characters are copied from the source.
    This function provides better control over buffer overflows and is safer '
    to use than strcat()
*/