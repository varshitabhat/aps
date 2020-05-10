# include<stdio.h>
# define MAX_SIZE 100
void dks(int pos, int n, int open, int close);


void printdyckseries(int n)
{
    if(n > 0)
        dks(0, n, 0, 0);
    return;
}

void dks(int pos, int n, int open, int close)
{
    static char str[MAX_SIZE];

    if(close == n)
    {
        printf("%s \n", str);
        return;
    }
    else
    {
        if(open > close)
        {
            str[pos] = 'y';
            dks(pos+1, n, open, close+1);
        }

        if(open < n)
        {
        str[pos] = 'x';
        dks(pos+1, n, open+1, close);
        }
    }
}
int main()
{
int n;
    scanf("%d",&n);

    printdyckseries(n);
    getchar();
    return 0;
}
