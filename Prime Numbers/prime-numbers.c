#include <stdio.h>

int main()
{

    int endNumber = 200;
    int primeArray[100] = {[0] = 1, [1] = 2};
    int endIndex = 2; // the last index with prime number

    for (int currNum = 3; currNum < endNumber; currNum++)
    {
        if (currNum % 2 == 0)
        {
            printf("%d is even\n", currNum);
            continue;
        }
        for (int j = endIndex - 1; j >= 1; --j)
        {
            if (currNum % primeArray[j] == 0)
            {
                //     // if the currentNumber is divisible by primeArray[i] evenly, then it is not prime
                printf("%d is not prime\n", currNum);
                break;
            }
            else if ((currNum % primeArray[j] != 0) && j == 1)
            {
                printf("%d is prime\n", currNum);
                primeArray[endIndex] = currNum;
                endIndex = endIndex + 1;
                break;
            }
        }
    }

    for (int i = 0; i < endIndex; i++)
    {
        printf("%d\n", primeArray[i]);
    }

    return 0;
}