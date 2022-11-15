#include <stdio.h>

void print(int a[], int n)
{
    printf("Array:");
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a+i));
    }
    printf("]");
}


void insert(int a[], int *n)
{
    int value, pos;
    printf("Enter value to add:");
    scanf("%d", &value);
    printf("Enter postion to be added:");
    scanf("%d", &pos);
    if (pos > 20)
    {
        printf("->Cant Add number");
        return;
    }
    for (int i = *n; i >= pos - 1; i--)
    {
        a[i] = a[i - 1];
    }
    if (pos != 0)
        a[pos - 1] = value;
    else
        a[0] = value;
    *n = *n + 1;
    print(a, *n);
}



void delete (int a[], int *n)
{
    int pos;
    printf("Enter postion to delete:");
    scanf("%d", &pos);
    
    if (pos>*n) {
         printf("->Cant delete number");
        return;
    }
    
    for (int i = pos - 1; i < *n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    *n = *n - 1;
    print(a, *n);
}



void search(int a[], int n)
{
    int value;
    printf("Enter value to search:");
    scanf("%d", &value);
    for (int i = 0; i < n; i++)
    {
        if (value == a[i])
        {
            printf("->Value %d found in position %d", value, i + 1);
            return;
        }
    }
    printf("->Value %d not found \n ", value);
}

void main()
{
    int n, a[20], ch;

    printf("Enter limit no:");
    scanf("%d", &n);
    printf("Enter nos:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a+i);
    }
    do
    {
        printf("\nSelect Choice:\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Search\n");
        printf("4.Exit\n");
        scanf("%d", &ch);

        if (ch == 1)
        {
            insert(a, &n);
        }
        else if (ch == 2)
        {
            delete (a, &n);
        }
        else if (ch == 3)
        {
            search(a, n);
        }
        else
        {
            printf("Invalid Choice");
        }
    } while (ch != 4);
}