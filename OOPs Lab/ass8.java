import java.util.Scanner;
	class sorting{
		int a[],n;
		void get()
		{
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter array size: ");
			n = sc.nextInt();
			a = new int[n];
			System.out.println("Enter array elements: ");
			for(int i = 0; i < n; i++)
			{
				a[i] = sc.nextInt();
			}
		}
		void show()
		{
			System.out.println("Sorted array is:");
			for(int i = 0; i < n; i++)
			{
				System.out.println(a[i] + " ");
			}
		}
		void insertion_sort()
		{
			System.out.println("INSERTION SORT");
			int k;
			for(int i = 1; i < n; i++)
			{
				k = a[i];
				int j = i-1;
				while(j >= 0 && a[j] > k)
				{
					a[j+1] = a[j];
					j = j-1;
				}
				a[j+1] = k;
			}
		}
		void bubble_sort()
		{
			System.out.println("BUBBLE SORT");
			int temp;
			for(int i = 0; i < n-1; i++)
			{
				for(int j = 0; j < n-1-i; j++)
				{
					if(a[j] > a[j+1])
					{
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
				}
			}
		}
	}
	public class ass8 {

			public static void main(String[] args) {
			int ch;
			Scanner sc = new Scanner(System.in);
			sorting n = new sorting();
			n.get();
			System.out.println("press 1 for bubble sort\npress 2 for insertion sort:");
//			Scanner sc = new Scanner(System.in);
			ch=sc.nextInt();
			switch(ch){
			
				case 1: n.bubble_sort();
						n.show();
						break;
				case 2: n.insertion_sort();
						n.show();
						break;
				case 3:
					return;
						
			}

		}

	}


