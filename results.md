# Results

**Linear vs Binary**
+ For *Linear Functions* have a slight time reduction for pointers. The average time of 3 tests was ~0.2 seconds faster on pointers than on vectors
+ For *Binary Functions* there was negligible differences between pointers and vectors
+ For *Linear Search* vs *Binary Search*, binary has an astronomical difference against linear.
+ Linear Search Average = 1.3s - Binary Search Average = 0.00025s

**Debugger vs Optimization**
+ Debugging symbol brought no change to both linear and binary functions
+ Optimization halfed the speeds of linear search
+ Before Average = 1.4s (Vector + Ptr) - After Average = 0.7s (Vector + Ptr)
+ Optimization added ~0.00010s to *Binary Functions* for both pointers and vectors
