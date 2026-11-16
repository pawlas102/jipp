#include <stdio.h>

#define MAX_LINE 512
#define MAX_RESULT (MAX_LINE * 8)

char litery[] = {
    'a', 165, 'b', 'c', 134, 'd', 'e', 169, 'f', 'g', 'h', 'i', 'j',
    'k', 'l', 136, 'm', 'n', 228, 'o', 162, 'p', 'q', 'r', 's', 152,
    't', 'u', 'v', 'w', 'x', 'y', 'z', 190, 171,
    'A', 164, 'B', 'C', 143, 'D', 'E', 168, 'F', 'G', 'H', 'I', 'J',
    'K', 'L', 157, 'M', 'N', 227, 'O', 224, 'P', 'Q', 'R', 'S', 151,
    'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 189, 141,
    ' ', '.', ',', '?', ':', '-', '0', '1', '2', '3', '4', '5', '6',
    '7', '8', '9', '!', '\0'
};
char *mors[] = {
    ".-", ".-.-", "-...", "-.-.", "-.-..", "-..", ".", "..-..", "..-.",
    "--.", "....", "..", ".---", "-.-", ".-..", ".-..-", "--", "-.",
    "--.--", "---", "---.", ".--.", "--.-", ".-.", "...", "...-...",
    "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "--..-", "--",
    ".-", ".-.-", "-...", "-.-.", "-.-..", "-..", ".", "..-..", "..-.",
    "--.", "....", "..", ".---", "-.-", ".-..", ".-..-", "--", "-.",
    "--.--", "---", "---.", ".--.", "--.-", ".-.", "...", "...-...",
    "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "--..-", "--",
    " ", ".-.-.-", "--..--", "..--..", "---...", "-....-", "-----",
    ".----", "..---", "...--", "....-", ".....", "-....", "--...",
    "---..", "----.", "!", 0
};

int main()
{
    char tekst[MAX_LINE], wynik[MAX_RESULT], kod[MAX_LINE];
    int tryb, i, j, k, z, znaleziono;

    printf("1 - kodowanie\n2 - dekodowanie\n");
    printf("Wybierz tryb: ");
    if (scanf("%d", &tryb) != 1 || (tryb != 1 && tryb != 2))
    {
        printf("Nieprawidlowy tryb.\n");
        return 1;
    }
    getchar();

    printf("Podaj tekst: ");
    if (fgets(tekst, MAX_LINE, stdin) == NULL)
        return 1;

    for (i = 0; tekst[i] != '\0'; i++)
        if (tekst[i] == '\n')
            tekst[i] = '\0';

    k = 0;

    if (tryb == 1)
    {
        for (i = 0; tekst[i] != '\0'; i++)
        {
            if (tekst[i] == ' ')
            {
                wynik[k++] = '/';
                wynik[k++] = ' ';
                continue;
            }

            char znak = tekst[i];

            for (j = 0; litery[j] != '\0' && litery[j] != znak; j++)
                ;

            if (litery[j] == '\0')
            {
                printf("Nieobslugiwany znak: %c\n", tekst[i]);
                return 1;
            }

            for (int m = 0; mors[j][m] != '\0'; m++)
                wynik[k++] = mors[j][m];
            wynik[k++] = ' ';
        }
    }
    else
    {
        i = 0;
        while (tekst[i] != '\0')
        {
            while (tekst[i] == ' ')
                i++;

            if (tekst[i] == '\0')
                break;

            if (tekst[i] == '/')
            {
                wynik[k++] = ' ';
                i++;
                continue;
            }

            j = 0;
            while (tekst[i] != '\0' && tekst[i] != ' ' && tekst[i] != '/')
                kod[j++] = tekst[i++];
            kod[j] = '\0';

            znaleziono = 0;
            for (z = 0; litery[z] != '\0'; z++)
            {
                int dlugosc = 0;
                while (mors[z][dlugosc] != '\0')
                    dlugosc++;

                if (dlugosc != j)
                    continue;

                int pasuje = 1;
                for (int m = 0; m < j; m++)
                {
                    if (mors[z][m] != kod[m])
                    {
                        pasuje = 0;
                        break;
                    }
                }
                if (pasuje)
                {
                    wynik[k++] = litery[z];
                    znaleziono = 1;
                    break;
                }
            }

            if (!znaleziono)
            {
                printf("Nieprawidlowy kod Morse'a.\n");
                return 1;
            }
        }
    }

    wynik[k] = '\0';
    printf("Wynik: %s\n", wynik);
    return 0;
}
