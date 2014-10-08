#include<iostream>
using namespace std;
void sort(int a[10]);
int main()
{
	int a[10];
	for(int i = 0;i<10;i++)
	{
		cout << "Input " << i+1 << "st inteager: ";
		cin >> a[i];
	}
	sort(a);
	return 0;
}
void sort (int a[10])
{
	int max = a[0], max1 = 0,max2 = 0,j = 0,k = 0;
	for(int i = 1;i<10;i++)
	{
		if(a[i] > max)
		{
			max = a[i];
			j = i;
		}
	}
	a[j] = 0;
	max1 = a[0];
	for (int i = 1;i<10;i++)
	{
		if(a[i] > max1)
		{
			max1 = a[i];
			k = i;
		}
	}
	a[k] = 0;
	max2 = a[0];
	for (int i = 1;i<10;i++)
	{
		if(a[i] > max2)
		{
			max2 = a[i];
		}
	}
	cout << "The biggest the inteager is " << max << max1 << max2 << endl;
}
