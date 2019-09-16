#include <iostream>

int main ()
{
	std::cout<<"# Results" <<std::endl<<std::endl;
	std::cout<<"**Linear vs Binary**"<<std::endl;
	std::cout<<"+ For *Linear Functions* have a slight time reduction for pointers. The average time of 3 tests was ~0.2 seconds faster on pointers than on vectors."<<std::endl;
	std::cout<<"+ For *Binary Functions* there was negligible differences between pointers and vectors."<<std::endl;
	std::cout<<"+ For *Linear Search* vs *Binary Search*, binary has an astronomical difference against linear."<<std::endl;
	std::cout<<"+ Linear Search Average = 1.3s - Binary Search Average = 0.00025s."<<std::endl<<std::endl;
	std::cout<<"**Debugger vs Optimization**"<<std::endl;
	std::cout<<"+ Debugging symbol brought no change to both linear and binary functions."<<std::endl;
	std::cout<<"+ Optimization halfed the speeds of linear search."<<std::endl;
	std::cout<<"+ Before Average = 1.4s (Vector + Ptr) - After Average = 0.7s (Vector + Ptr)."<<std::endl;
	std::cout<<"+ Optimization added ~0.00010s to *Binary Functions* for both pointers and vectors."<<std::endl;
	return 0;
}
