#include <stdio.h>
 #include <stdlib.h>

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b; 
    *b = tmp; 
}

    void triRapid(int tab[], int first, int last) {
    
	    int pivot, i, j;
    if (first < last:W)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (tab[i] <= tab[pivot] && i < last)
                i++;
            while (tab[j] > tab[pivot])
                j--;
            if (i < j)
            {
                ft_swap(&tab[i], &tab[j]);
            }
        }
        ft_swap(&tab[pivot], &tab[j]);
        triRapid(tab, first, j - 1);
        triRapid(tab, j + 1, last);
    }
}

int main(int ac, int **av)
{

    int i;

    if (ac < 2)
    exit(0);


    for (i = 0; i < ac; i++)
	triRapid(av, 0, ac - 1);

    printf("\n Tableau trié : ");
    for (i = 0; i < ac; i++)
    {
        printf(" %t", av[i]);
    }
    printf("\n");
    return 0;
}
