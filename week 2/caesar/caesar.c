// header files
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// prototypes
int encipher(int k, string p);
bool is_digit(string s);
// main

int main (int argc, string argv[])
{
    // taking just two command line arguments
    if(argc == 2 && is_digit(argv[1]))
    {
        //assigning the key
        int key = atoi(argv[1]);
        //taking the input txt
        string txt = get_string("plaintext: ");
        //implimenting the function and taking output string
        encipher(key, txt);
    }
    // stoping non-numeric value in comand line

    //exit(1);
   // printf("Usage: ./caesar key\n");
   // if (is_digit(argv[1]))
    // emplimenting the function in else
    else//f(is_digit(argv[1])== false || argc != 2)
    {
        printf("Usage: ./caesar key\n");
        exit(1);

    }

}
// enciphering funcion
int encipher(int k, string p)
{
    int n = strlen(p);
    char c[n + 1];
    //implimenting the loop
    for(int i = 0; i < n; i++)
    {
        //checking for uppercase
        if(isupper(p[i]))
        {
            // converting ascii to alphabet index
            p[i] = p[i] - 65;
            // encipher calculations
            c[i] = (p[i] + k) % 26;
            // alphabet index to ascii
            c[i] = c[i] + 65;
        }
        // checking for lowercase
        else if ( islower(p[i]))
        {
            // converting ascii to alphabet index
            p[i] = p[i] - 97;
            // encipher calculations
            c[i] = (p[i] + k) % 26;
            // alphabet index to ascii
            c[i] = c[i] + 97;
        }
        else
        {
            c[i] = p[i];
        }

    }
    c[n] = '\0';
    //ending the loop and returning the string c
    // printing output
    printf("ciphertext: %s\n", c);
    return 1;
}

bool is_digit(string s)
{
    for(int i =0; s[i] != 0; i++)
    {
        if(!isdigit(s[i]))
        {
            return false;
           // printf("true");
        }
    }
    return true;
   // printf("false");

}
