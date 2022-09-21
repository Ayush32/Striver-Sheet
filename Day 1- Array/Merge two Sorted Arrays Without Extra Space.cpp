Approach 1 - Using Extra Space- 3rd Array - T.C- NlogN and S.C - O(size of array1 + size of array2) i.e O(n + m);

// code
void mergeTwoSortedArray(int arr1[], int arr2[],int m,int n){
  int arr3[m + n];
  int k = 0;
  
  for(int i = 0;i<m;i++)
  {
    arr3[k++] = arr1[i];
  }
  for(int j = 0;j<n;j++)
  {
    arr3[k++] = arr2[j];
  }
  sort(arr3,arr3+m+n);
  k = 0;
  
  for(int i = 0;i<m;i++)
  {
    arr1[i] = arr3[k++];
  }
  
  for(int j = 0;j<m;j++)
  {
    arr2[j] = arr3[k++];
  }
  
}
