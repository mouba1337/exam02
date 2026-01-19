

unsigned char   reverse_bits(unsigned char octet)
{
    int    i;
    unsigned char   result;

    result = 0;
    i = 8;
    while (i > 0)
    {
        result = (result << 1) | (octet & 1);
        octet = octet >> 1;
        i--;
    }
    return (result);
}