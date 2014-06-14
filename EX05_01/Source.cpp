#include <iostream>
#include <string>
using namespace std;




template<typename T>
int linearSearch(T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}

int main() {
	int list1[] = { 3, 5, 1, 0, 2, 8, 7 };
	int a = linearSearch(list1, 0, 7);
	int b = linearSearch(list1, 2, 7);
	int c = linearSearch(list1, 8, 7);

	double list2[] = { 3.5, 0.5, 1.4, 0.4, 2.5, 1.8, 4.7 };
	double x = linearSearch(list2, 1.4, 7);
	double y = linearSearch(list2, 4.7, 7);
	double z = linearSearch(list2, 0.5, 7);

	string list3[] = { "Atlanta", "Denver", "Chicago", "Seattle" };
	string str1 = linearSearch(list3, "Denver", 4);
	string str2 = linearSearch(list3, "Seattle", 4);
	string str3 = linearSearch(list3, "Atlanta", 4);


	return 0;
}