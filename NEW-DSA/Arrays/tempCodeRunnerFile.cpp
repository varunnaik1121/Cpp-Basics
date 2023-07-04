 while (i <= j)
    {
        if ((sorted[i] + sorted[j]) > sum)
        {
            j--;
        }
        else if ((sorted[i] + sorted[j]) < sum)
        {
            i++;
        }
        if ((sorted[i] + sorted[j]) == sum)
        {
            cout << sorted[i] << " " << sorted[j] << endl;

            i++;
        }
    }