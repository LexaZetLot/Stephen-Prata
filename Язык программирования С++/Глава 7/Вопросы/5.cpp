int fp(double* arr, int size);
int main(void)
{
	return 0;
}
int fp(double* arr, int size)
{
	int max;
	for (int i = 0; i < size; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}