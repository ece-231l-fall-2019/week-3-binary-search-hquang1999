#include <vector>
#include "search.h"

bool binarySearch(const std::vector<int>& set, int  value)
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
		if (set[mid] > value)
		{
			end = mid - 1;
		}
		else
		{
			begin = mid + 1;
		}
		if (mid == end)
		{
			return false;
		}
	}
	return false;
}

bool binarySearch(const int *begin, const int *end, int value)
{
	const int *mid;
		mid = begin + (end - begin)/2;
		if (mid == end)
		{
			return false;
		}
		if (*mid == value)
		{
			return true;
		}
		else if (*mid > value)
		{
			end = mid;
		}
		else if (*mid < value)
		{
			begin = mid + 1;
		}
	return binarySearch(begin,end,value);
}

bool binarySearchRecursive(const int *begin, const int *end, int value)
{
	const int *mid;
	
		mid = begin + (end - begin)/2;
		if (mid == end)
		{
			return false;
		}
		if (*mid == value)
		{
			return true;
		}
		else if (*mid > value)
		{
			end = mid;
		}
		else if (*mid < value)
		{
			begin = mid + 1;
		}
		return binarySearchRecursive(begin, end, value);
	
}

