// Code by Yajat Patil SY-CSE B
// Search a Particular Data from the Given Array of Strings using Binary Search Method

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100][50], key[50], temp[50];
    int n, i, j;
    int low, high, mid, found = 0;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }

   
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(strcmp(a[i], a[j]) > 0)
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }

    printf("Strings in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s ", a[i]);
    }

    printf("\nEnter string to search: ");
    scanf("%s", key);

   
    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(strcmp(a[mid], key) == 0)
        {
            printf("String \"%s\" found at position %d.\n", key, mid + 1);
            found = 1;
            break;
        }
        else if(strcmp(a[mid], key) < 0)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("String \"%s\" not found in the array.\n", key);
    }

    return 0;
}
