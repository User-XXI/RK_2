int bubble_sort(double *array, int size)
{ 
    double buffer;
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j) 
        {
            if (array[j] > array[j + 1]) 
            {
                buffer = array[j];
                array[j] = array[j + 1];
                array[j + 1] = buffer;
            }
        }
    }
 
    for (int i = 0; i < size; i++) 
    {
        std::cout << i << ") " << array[i] << std::endl;
    }
    std::cout << std::endl;
    
    return 0;
}
