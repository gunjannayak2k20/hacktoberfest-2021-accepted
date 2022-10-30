import java.util.Scanner;

class SelectionSort
{
    void sort(int arr[],int n)
    {
        for (int i = 0; i < n-1; i++)
        {
            int key = i;
            for (int j = i+1; j < n; j++)
                if (arr[j] < arr[key])
                    key = j;
 
            int temp = arr[key];
            arr[key] = arr[i];
            arr[i] = temp;
        }
    }
 
    
    void printArray(int arr[],int n)
    {
        for (int i=0; i<n; ++i)
            System.out.print(arr[i]+" ");
        System.out.println();
    }
 
    
    public static void main(String args[])
    {
        SelectionSort obj = new SelectionSort();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array : ");
        int n=sc.nextInt();
        System.out.println("Enter the elements of array:");
        int arr[]=new int[n];
        for(int i=0;i<n;i++)
        {
        	arr[i]=sc.nextInt();
        }
        obj.sort(arr,n);
        System.out.println("Sorted array : ");
        obj.printArray(arr,n); 
    }
}