 for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }