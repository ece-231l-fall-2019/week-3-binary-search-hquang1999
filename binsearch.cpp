#include <vector>
#include "search.h"

bool binarySearch(const std::vector<int> set, int  value)
{
	size_t begin = 0;
	size_t end = set.size() - 1;

	while (true)
	{
		size_t  mid = (begin + end)/2;

		if (set[mid] == value)
		{
			return true;
		}
		if (begin == end)
		{
			return false;
		}
		if (set[mid] > value)
		{
			end = mid - 1;
		}
		else
		{
			begin = mid + 1;
		}
	}
	return false;
}

bool binarySearch(const int *begin, const int *end, int value)
{
	const int *mid;
	mid = begin + (begin - end)/2;
 	while (true)
	{
		if (*mid == value)
		{
			return true;
		}
		if (*mid == *end)
		{
			return false;
		}
		if (*mid > value)
		{
			end = mid;
		}
		if (*mid < value)
		{
			begin = mid + 1;
		}
	}
	return false;
}

