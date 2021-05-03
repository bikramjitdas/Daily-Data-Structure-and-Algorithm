    for(int i = 1;i<=arr.length-1;i++)
    {
        for(int j =0; j< arr.length-i; j++)
        {
            if(isSmaller(arr,j+1,j))
            {
                swap(arr,j+1,j);
            }
        }
    }