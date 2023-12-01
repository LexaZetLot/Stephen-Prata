void fp(int* arr, int* arr_last, int n);
int main(void)
{
	return 0;
}
void fp(int* arr, int* arr_last, int n)
{
	for (int i = 0; arr + i != arr_last; i++)
		arr[i] = n;
}