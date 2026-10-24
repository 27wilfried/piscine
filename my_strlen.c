int my_strlen(char const *str);

int my_strlen(char const *str)
{
    int count = 0;

    if (!str)
        return (0);

    while (str[count] != '\0') {
        count++;
    }

    return (count);
}
