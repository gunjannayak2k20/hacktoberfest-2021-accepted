import java.util.Arrays;
import java.util.Scanner;

public class Sorting {
	
	void merge(int array[], int low, int mid, int high) {
		int n1 = mid - low + 1;
		int n2 = high - mid;
		
		int X[] = new int[n1];
		int Y[] = new int[n2];
		
		for(int i=0; i<n1; i++) {
			X[i] = array[low + i];
		}
		for(int j=0; j<n2; j++) {
			Y[j] = array[mid + 1 + j];
		}
		
		int i, j, k;
		i = 0;
		j = 0;
		k = low;
		
		while(i<n1 && j<n2) {
			if(X[i] <= Y[j]) {
				array[k] = X[i];
				i++;
			} else {
				array[k] = Y[j];
				j++;
			}
			k++;
		}
		
		while (i<n1) {
			array[k] = X[i];
			i++;
			k++;
		}
		
		while (j<n2) {
			array[k] = Y[j];
			j++;
			k++;
		}
	}
	
	void mergeSort(int array[], int low, int high) {
		if(low < high) {
			int mid = (low + high)/2;
			
			mergeSort(array, low, mid);
			mergeSort(array, mid+1, high);
			
			merge(array, low, mid, high);
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int n;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number of elements in array : ");
		n = sc.nextInt();
		
		int[] array = new int[n];
		
		System.out.println("Enter the elements of array: ");
		for(int i=0; i<n; i++) {
			array[i] = sc.nextInt();
		}
		
		System.out.println("Unsorted Array: ");
		System.out.println(Arrays.toString(array));
		
		//int[] array = { 90,10,-6,7,-1,0,35 };
		Sorting ob = new Sorting();
		
		ob.mergeSort(array, 0, array.length-1);
		
		System.out.println("Sorted Array: ");
		System.out.println(Arrays.toString(array));
	}

}
