#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{

    if (argc == 2)
    {
        int len = strlen(argv[1]);
        bool validation = false;
        //Check of key lenght

        if (len < 26 || len > 26)
        {
            printf("Key must contain 26 characteres\n");
            return 1;
        }

        else
        {
            //check for repetitive characters (case-insensitive)

            for (int i = 0; i < len; i++)
            {
                for (int j = i + 1; j < len + 1 ; j++)
                {
                    if ((argv[1][i] == argv[1][j]) > 0 || argv[1][i] == argv[1][i + 1])
                    {
                        printf("Key must not contain repetitive characteres\n");
                        return 1;
                    }
                }
            }

            //check for non-alphabetics characters

           /* for (int k = 0; k < len; k++)
            {
                if (isdigit(argv[1][k]) > 0 || isblank(argv[1][k]) > 0)
                {
                    printf("Key must contain only alphabetic characteres\n");
                    return 1;
                }
            }*/
        }

        //geting of plaintext

        string plaintext = get_string("plaintext: ");

        // >> mapping

        int x = strlen(plaintext), e;

        for (int l = 0; l < x; l++)
        {
            //preserve case

            if (isupper(plaintext[l]) > 0)
            {
                for (int m = 0; m < len; m++)
                {
                    argv[1][m] = toupper(argv[1][m]);
                }
                e = plaintext[l] - 65 ;
                plaintext[l] = argv[1][e];
            }

            else if (islower(plaintext[l]) > 0)
            {
                for (int n = 0; n < len; n++)
                {
                    argv[1][n] = tolower(argv[1][n]);
                }
                e = plaintext[l] - 97 ;
                plaintext[l] = argv[1][e];
            }

            //leave non-alphabetics characters as-is

            else if ((isdigit(plaintext[l]) || isblank(plaintext[l]) || iscntrl(plaintext[l]) || isgraph(plaintext[l])) > 0)
            {
                plaintext[l] = plaintext[l];
            }
        }

        printf("ciphertext: %s\n", plaintext);

    }

    else
    {
        printf("Usage : ./substitution KEY\n");
        return 1;
    }

}


