#include <iostream>
using namespace std;


int rand(int a, int b) {
	return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[]) {
	srand(atoi(argv[1]));
	int n = rand(4, 30);
	printf("%d\n", n);
	for(int i = 1; i <= n; ++i)
		printf("%d ", rand(1, 100));
}
