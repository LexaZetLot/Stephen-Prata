#include <iostream>
struct chaff
{
	char dross[20];
	int slag;
};
int main(void)
{
	struct chaff* list;
	char buf[500];
	list = new (buf) struct chaff[2];
	for (int i = 0; i < 2; i++)
		std::cin >> list[i].dross >> list[i].slag;
	for (int i = 0; i < 2; i++)
		std::cout << list[i].dross << " " << list[i].slag << std::endl;
	return 0;
}
