    #include <stdio.h>
    int main()
    {
        int num, temp, rem, sum = 0, fact, i;

        printf("Enter a number: ");
        scanf("%d", &num);

        temp = num;

        while (temp > 0)
        {
            rem = temp % 10;

            fact = 1;
            for (i = 1; i <= rem; i++)
            {
                fact *= i;
            }

            sum += fact;
            temp /= 10;
        }

        if (sum == num)
        {
            printf("%d is a Strong number.\n", num);
        }
        else
        {
            printf("%d is NOT a Strong number.\n", num);
        }
        return 0;
    }