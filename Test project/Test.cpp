#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct SRecord
{
	int mId;
	string mName;
};

int BinarySearch(SRecord a[], int low, int high, int target)
{
	while (low < high)
	{
		int middle = (low + high) / 2;

		if (target < a[middle].mId)
		{
			high = middle - 1;
		}

		else if (target > a[middle].mId)
		{
			low = middle + 1;
		}

		else return middle;
	}
	return -1;
};


int main()
{
	SRecord records[15] = {
		{2,"pete"},
		{4,"fred"},
		{5,"john"},
		{8,"sue"},
		{9,"mary"},
		{10,"flo"},
		{12,"sam"},
		{13,"max"},
		{15,"tom"},
		{17,"jerry"},
		{19,"kate"},
		{20,"liz"},
		{21,"ellie"},
		{25,"henry"},
		{27,"oscar"}
	};



}