for (int i=1;i<=3;i++)
    {
        for (int j=1;j<=3;j++)
        {
            s[i][j]=0;
            for (int k=1;k<=3;k++)
            {
                s[i][j]=s[i][j]+a[i][k]*b[k][j];
            }
        }
    }