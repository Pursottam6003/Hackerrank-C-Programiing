#include <stdio.h>

int *get_max_btwise(int n, int k);

int main(void)
{
    // Taking input
    int n, k;
    int *result;
    scanf("%i %i", &n, &k);

    // getting result
    result = get_max_btwise(n, k);
    
    // printing the result
    for (int i = 0; i < 3; i++)
        printf("%i\n", result[i]);

    return 0;
}

int *get_max_btwise(int n, int k)
{
    // size of array
    int size = n * (n - 1) / 2;
    int btwise[3][size];

    // storing bitwise AND, OR and XOR values in respective arrays
    for  (int i = 1, index = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++, index++)
        {
            btwise[0][index] = i & j;
            btwise[1][index] = i | j;
            btwise[2][index] = i ^ j;
        }
    }

    // comparing with threshold value 'k'
    static int out[] = {0, 0, 0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (btwise[i][j] < k && out[i] < btwise[i][j])
                out[i] = btwise[i][j];
        }
    }

    return out;
}



