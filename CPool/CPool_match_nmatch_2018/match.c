/*
** EPITECH PROJECT, 2018
** P2 - MatchNMatch - Match
** File description:
** Verify if two strigs are same
*/

int lettre(int i, char const *s1, char const *s2)
{
    while (s1[i] != '\0') {
        if (s1[i] == s2)
            return (i);
        i++;
    }
}

int etoile(int j, char const *s2)
{
    while (s2[j] == '*')
        j++;
    return(j);
}

int match(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
	
    while (s1[i] != '\0') {
        if (s2[j] == '*' && s2[j + 1] == '\0')
            return (1);
        if (s2[j] == '*') {
            j = etoile(j, s2);
            i = lettre(i, s1, s2[j]);
        }
        if (s1[i] != s2[j])
            return (0);
        if (s2[j - 1] == '*' && s2[j] == '\0')
            return (1);
        i++;
        j++;
    }
    return (1);
}
