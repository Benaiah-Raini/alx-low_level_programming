/**
 * _isalpha - this is the function that checks the codes
 * @c: the character to be checked
 * Return: returns 1 for alpha and 0 for non
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 96) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
