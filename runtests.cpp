#include <iostream>
#include <fstream>
#include <vector>

#include "Timer.h"
#include "search.h"
#include "sort.h"

void  readFile (const char *filename, std::vector<int>& set) 
{

	std::ifstream fin(filename);
	while(true)
	{
		int val;
		fin >> val;
		if (fin.eof())
			break;
		set.push_back(val);
	}
	fin.close();
}


int main()
{
	std::vector<int> numbers;
	std::vector<int> search;

	numbers.reserve(1000000);
	search.reserve(2000);

	readFile("numbers", numbers);
	readFile("search", search);

	{
		Timer timer("Time to linear search all values: ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers, search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	{
		Timer timer("Time to linear search all values (pointers): ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers.data(), numbers.data() + numbers.size(),
					search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	{
                Timer timer("Time to binary search all values: ");

                int found = 0;
                for (size_t i = 0; i < search.size(); i++)
                {
                        if (binarySearch(numbers, search[i]))
                                found++;
                }

                std::cout << "Found "<< found << "/"
                        << search.size() << " values." << std::endl;
        }

        {
                Timer timer("Time to binary search all values (pointers): ");

                int found = 0;
                for (size_t i = 0; i < search.size(); i++)
                {
                        if (binarySearch(numbers.data(), numbers.data() + numbers.size(),
                                        search[i]))
                                found++;
                }

                std::cout << "Found "<< found << "/"
                        << search.size() << " values." << std::endl;
        }

	{
		Timer timer ("Time to sort array: ");
		bubbleSort(search.data(), search.data() + search.size());
	}
	
	for (unsigned int i = 0; i < search.size(); i++)
	{
		std::cout << search.at(i) << std::endl;
	}
	return 0;
}


