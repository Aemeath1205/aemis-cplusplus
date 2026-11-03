#include <iostream>
using namespace std;
namespace A
{
	int a = 0;
}

namespace B
{
	int a = 1;
}

int main(void)
{
	cout << A::a << B::a << endl;
	//cin >> A::a >> ' ' >> B::a;
	cin >> A::a >> B::a;
	cout << A::a << B::a << endl;
	std::cout << A::a << B::a << endl;

	return 0;
}