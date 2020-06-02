package twoDarray;

import java.util.*;

public class monkAndOperations {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		String[] input = new String[2];
		input = s.nextLine().split(" ");
		int m = Integer.parseInt(input[0]);
		int n = Integer.parseInt(input[0]);

		int[][] arr = new int[m][n];

		for (int i = 0; i < m; i++)
			for (int j = 0; j < m; j++)
				arr[i][j] = s.nextInt();

		int v1 = s.nextInt();
		int v2 = s.nextInt();
		int v3 = s.nextInt();
		int v4 = s.nextInt();

		int sum_arr = 0;
		// finding sum of array
		for (int i = 0; i < m; i++)
			for (int j = 0; j < m; j++)
				sum_arr += Math.abs(arr[i][j]);

		int rowV_sum = row_operation(arr, m, n, v1, v2);
		int colV_sum = col_operation(arr, m, n, v3, v4);

		if (rowV_sum >= colV_sum) {
			if (rowV_sum >= sum_arr)
				System.out.println(rowV_sum);
			else
				System.out.println(colV_sum);
		} else {
			if (colV_sum > sum_arr)
				System.out.println(colV_sum);
			else
				System.out.println(sum_arr);
		}

	}

	private static int col_operation(int[][] arr, int m, int n, int v3, int v4) {
		// TODO Auto-generated method stub
		int[] sum_col = new int[m];

		// finding col sum
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				sum_col[i] += Math.abs(arr[j][i]);
		int[][] arr_alias = arr;

		// col variation1
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				arr_alias[j][i] = arr[j][i] + v3;

		int[] sum_col_alias = new int[n];

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				sum_col_alias[i] += Math.abs(arr_alias[j][i]);

		// row variation2

		for (int i = 0; i < n; i++) {
			if (sum_col[i] < sum_col_alias[i])
				sum_col[i] = sum_col_alias[i];
			if (sum_col[i] < Math.abs(v4 * n))
				sum_col[i] = Math.abs(v4 * n);
		}

		int arr_colV_sum = 0;
		for (int i = 0; i < n; i++)
			arr_colV_sum = sum_col[i];
		return arr_colV_sum;

	}

	private static int row_operation(int[][] arr, int m, int n, int v1, int v2) {
		// TODO Auto-generated method stub
		int[] sum_row = new int[m];

		// finding sum row
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				sum_row[i] += Math.abs(arr[i][j]);
		int[][] arr_alias = arr;
		// row variation1
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				arr_alias[i][j] = arr[i][j] + v1;

		int[] sum_row_alias = new int[m];

		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				sum_row_alias[i] += Math.abs(arr_alias[i][j]);

		// row variation2

		for (int i = 0; i < n; i++) {
			if (sum_row[i] < sum_row_alias[i])
				sum_row[i] = sum_row_alias[i];
			if (sum_row[i] < Math.abs(v2 * n))
				sum_row[i] = Math.abs(v2 * n);
		}
		int arr_rowV_sum = 0;
		for (int i = 0; i < n; i++)
			arr_rowV_sum = sum_row[i];

		return arr_rowV_sum;

	}
}
