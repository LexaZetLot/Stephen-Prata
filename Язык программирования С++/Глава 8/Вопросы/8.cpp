struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
struct box max(struct box x, struct box y)
{
	return x.volume > y.volume ? x : y;
}

int main(void)
{
	return 0;
}