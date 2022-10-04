public class SelectionSort
{
    private int[] array;
    public SelectionSort(int[] array)
    {
        this.array = array;
    }
    public void sort()
    {
        System.out.println("Sorting");
        //Iterates through the array
        for(int i = 0; i < size; i++)
        {
            int minIndex = i;
            //Find the smallest element
            for(int j = i+1; j < size; j++)
            {
                if(array[minIndex] > array[j])
                {
                    minIndex = j;
                }
            }
            //Swap the smallest element and the current elemtn
            int temp = array[minIndex];
            array[minIndex] = array[i];
            array[i] = temp;
        }
    }
}
