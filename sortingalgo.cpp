//ssort->selection sort
void ssort(int arr[],int n)
{
	int min_ind;
	for(int i=0;i<n-1;i++)
	{
		min_ind=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
				swap(arr[i],arr[j]);
		}
		//swap(arr[i],arr[min_ind]);
	}
}

//bsort->bubble sort
void bsort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int flag=0;
      for(int j=0;j<n-i;j++)
      {
      	if(arr[j+1]<arr[j])
      	{
      		swap(arr[j],arr[j+1]);
      		flag=1;
      	}
      }
      if(!flag)
      	break;
	}
}

//isort->insertion sort
void isort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int value=arr[i];
		int j=i;
		while(j>0&&arr[j-1]>value)
		{
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=value;
	}
}
