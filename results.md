# Results

### Linear vs Binary
+ For *Linear Functions* have a slight time reduction for pointers. The average time of 3 tests was ~0.3 seconds faster on pointers than on vectors.
+ For *Binary Functions* there was negligible differences between pointers and vectors.
+ For *Linear Search* vs *Binary Search*, binary has an astronomical difference against linear.
+ Linear Search Average = 1.3s - Binary Search Average = 0.00025s.

|Types   |Linear   |Binary    |
| ------ |:-------:| ---------|
|Vectors |1.537s   |0.0002668s|
|Pointers|1.255s   |0.0002614s|


### Debugger vs Optimization
+ Debugging symbol brought no change to both linear and binary functions.
+ Optimization halfed the speeds of linear search.
+ Before Average = 1.4s (Vector + Ptr) - After Average = 0.7s (Vector + Ptr).
+ Optimization added ~0.00010s to *Binary Functions* for both pointers and vectors.

|Types   |Linear   |Binary    |
| ------ |:-------:| ---------|
|Vectors |0.669s   |0.0002732s|
|Pointers|0.651s   |0.0003029s|
