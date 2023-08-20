#include <stdio.h>
//#define MAXLINE 1000 /* ������������ ������ �������� ������ */

int mygetline(char line[], int MAXLINE);
void copy(char to[], char from[]);

/* ������ ����� ������� ������ */
main()
{
    int len; /* ����� ������� ������ */
    int max; /* ����� ������������ �� ������������� ����� */
    char line[1000]; /* ������� ������ */
    char longest[1000]; /* ����� ������� ������ */

    max = 0;
    while ((len = mygetline(line, 1000)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /* ���� �� ���� ���� ������? */
    printf("%s", longest);
    return 0;
}


/* getline: ������ ������ � s, ���������� ����� */
int mygetline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
        }
    s[i] = '\0';
    return i;
}

/* copy: �������� �� 'from' � 'to'; to ���������� ������� */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
