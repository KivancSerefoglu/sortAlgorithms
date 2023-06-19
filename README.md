**Description**

In	 this	 assignment	 you	 will	 write	 a	 C++ program	 that	 finds	 the	 kth
largest	number	among	a	set	of	N numbers.	It	will	implement	the	solution	using	two	
different	 algorithms and	 measure	 the	 time	 elapsed	 during	 the	 execution	 of	 these
algorithms. The	design	of	the	program	will	follow	the	Strategy	Pattern [1]	to	be	able	to	
switch	algorithms	at	runtime. As	input,	the	program	will	take the	type	of	algorithm to	
be	applied	(1	or	2),	k (a	number	less	than	or	equal	to N).	Then	it	will	take	N followed	by
a list	 of	 N	 numbers.	 All	 of	those N numbers will	 be	 obtained	 from	 an	 input	 file.	 As	
output,	 it	 will	 print	 out	 the	 kth largest	 number and	the	total	 elapsed	 time for	 the	
completion	of	the	algorithm. The	details	are	provided	in	the	following	sections.


**The	Algorithms**


The	 program	 will	 implement	 the	 following	 two	 algorithms in	 the	 corresponding	
subclasses	of	the	SelectionAlgorithm class:

**Algorithm	1 (AlgorithmSortAll):**

n Store	all	the	numbers	in	an	array;
n Sort	the	array	in	decreasing	order,	e.g.,	using	insertion	sort;
n return	the	number	at	index k-1 in	the	array.

**Algorithm	2 (AlgorithmSortK):**

n Store	only	the	first	k	numbers	in	an	array;
n Sort	the	array	in	decreasing	order, e.g.,	using	insertion	sort;
n Read	the	rest	of	the	numbers	one	by	one;
n Ignore	if	it	is	smaller	than	the	number	at	kth	position	in	the	array
n Otherwise;	insert	it	in	its	correct	position	in	the	array and	shift	the	
remaining	numbers	(the	number	at	the	kth	position	will	be	thrown	
out	of	the	array)
n Return	the	number	at	index	k-1	in	the	array.

**Algorithm	3(Heap Algorithm):**
The new algorithm will make use of a heap structure to find the kth largest number in
O(NlogN) time, where N is the total amount of numbers. The outline of the algorithm is
as follows.
build a min heap with the first k numbers (i.e., k times insert)
then, compare the remaining N-k numbers with the root node (i.e., min. element)
if a number is smaller than the root, ignore the number
else, deleteMin (remove the root) and insert the new number
return the root element
