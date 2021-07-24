#include <stdio.h>
#include <string.h>
int main()
{
        int length, carry = 1;
        char binary[100], ones[100], twos[100];

        printf("Enter binary no \n ");
        scanf("%s", &binary);

        length = strlen(binary);

        for (int i = 0; i < length; i++)
        {
                if (binary[i] == '0')
                {
                        ones[i] = '1';
                }
                else
                {
                        ones[i] = '0';
                }
        }
        for (int i = length - 1; i >= 0; i--)
        {
                if (carry == 1 && ones[i] == '1')
                {
                        twos[i] = '0';
                }
                else if (carry == 1 && ones[i] == '0')
                {
                        twos[i] = '1';
                        carry = 0;
                }
                else
                {
                        twos[i] = ones[i];
                }
        }
        printf("\nOne's & Twos complement of %s is  %s  & %s.", binary, ones, twos);
        return 0;
}
