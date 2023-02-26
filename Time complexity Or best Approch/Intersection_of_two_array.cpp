void merge(int arr[], int beg, int mid, int end) {
  int i, j, k;
  int n1 = mid - beg + 1;
  int n2 = end - mid;

  int LeftArray[n1], RightArray[n2];
  for (int i = 0; i < n1; i++)
    LeftArray[i] = arr[beg + i];
  for (int j = 0; j < n2; j++)
    RightArray[j] = arr[mid + 1 + j];

  i = 0, j = 0;
  k = beg;

  while (i < n1 && j < n2) {
    if (LeftArray[i] < RightArray[j]) {
      arr[k] = LeftArray[i];
      i++;
    } else {
      arr[k] = RightArray[j];
      j++;
    }
    k++;
  }
  while (i < n1) {
    arr[k] = LeftArray[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = RightArray[j];
    j++;
    k++;
  }
}
void mergesort(int arr[], int beg, int end) {
  if (beg >= end)
    return;
  int mid = (beg + end) / 2;
  mergesort(arr, beg, mid);
  mergesort(arr, mid + 1, end);
  merge(arr, beg, mid, end);
}
void intersection(int *arr1, int *arr2, int n, int m) 
{
    //Write your code here
   /* if(n==0||m==0){
      cout<< <<" ";
    }*/
    int arr3[m],k=0;
    mergesort(arr1,0,n-1);
    mergesort(arr2, 0, m-1);
    int i=0,j=0;
    while(i<n&&j<m){
      if(arr1[i]==arr2[j]){
          arr3[k]=arr1[i];
          k++;
        i++;
        j++;
      }
      else if(arr1[i]<arr2[j]){
        i++;
      }
      else 
      j++;
    }
    for(int i =0;i<k;i++){
      cout<<arr3[i]<<" ";
    }


      }