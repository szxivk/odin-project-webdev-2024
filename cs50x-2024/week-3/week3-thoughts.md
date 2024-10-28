# Algorithms

- Quick recap with this [video](https://www.youtube.com/watch?v=g2o22C3CRfU).

## Searching and Sorting (and *O* and Ω notations)

1. **Linear Search**: The algorithm checks each element one by one to find the target

**NOTE**: Computer can only look at one piece of information at a time. It doesn't have birds eye view of the array like we would (if the array was small enough).

2. **Binary Search**: Best applied when array (or data-set) is sorted. Works on sorted arrays by repeatedly dividing the search interval in half.
 If the middle element is the target, the search ends; otherwise, the interval is reduced.

#### **Q**: how do we show which algorithm is better than the other?

- Here we use the *O*, Ω, and Θ notations.
- Time Complexity Notations:
    1. Big-O (*O*): Describes the upper bound or the worst-case scenario of an algorithm.
    2. Ω (Omega): Describes the lower bound or the best-case scenario.
    3. Θ (Theta): Describes when the worst-case and best-case complexities are the same.

- Computer scientists don't measure the performance of an algorithm by how many seconds or milliseconds the program took to finish, but rather by how many steps it took to end.
- Computer scientists like to think of things as being on the *order* of some number of steps:

- For above search algorithms:

|              | Linear Search | Binary Search |
| :---------------- | :------: | :----: |
| What's (approx.) the greatest number of steps this algo will ever take       |   *O*(N)   | *O*(*log*(N)) |
| What's (approx.) the fewest number of steps this algo will ever take       |   Ω(1)   | Ω(1) |

- Ω(1) - denotes algo takes finite/fixed number of steps in the best case


#### Most common notations (from fastest to slowest)

1. ***O*(1)** → Constant → The time is constant regardless of input size.
2. ***O*(*log*(N))** → Logarithmic → Grows slowly with input size; common in divide-and-conquer algorithms like binary search.
3. ***O*(N)** → Linear → Grows directly proportional to the input size; common in simple loops.
4. **O(N*log*(N))** → Log-linear → Grows faster than linear but still efficient; common in efficient sorting algorithms like merge sort and quicksort.
5. ***O*(N2)** → Quadratic → Grows rapidly; common in nested loops and brute-force algorithms.

## Sorting Algorithms

- Following were covered in this weeks lecture:

|              | Merge Sort | Selection Sort | Bubble Sort |
| :---------------- | :------: | :----: | :----: |
| Worst case       |   *O*(N*log*(N))   | *O*(N<sup>2</sup>) | *O*(N<sup>2</sup>) |
| Best case      |   Ω(N*log*(N))    | Ω(N<sup>2</sup>) | Ω(N) |

**NOTE**: Although Merge Sort is a better/faster algorithm than the other two, Bubble Sort is a better option than Merge Sort when we need to check whether a given array is sorted or not in some cases.

In the above table, for Selection Sort and merge sort, Θ notation can be used to indicate that they performs the same for both their worst and best case. 
E.g. Θ(N*log*(N)) can be used for merge sort to show its time Complexity.

# Structs

    Allows us to create our own data structures (It just means storing things back to back to back contiguously in memory), our own types of variables.
- A Structure can be a variable that contains any number of other variables.
- Syntax:
```c
typedef struct
{
    // below are this structure's members
    string name;
    string number;
} person; //this will create a new datatype in c called person

//declared using
person people[3];

//then it can be initialized using syntax
people[0].name = "sz";
people[0].number = "+91-6006754323";
```

**NOTE**: In above example, if we only initialize only one value, the other value becomes a garbage value -which is a bad practice.

# Recursion

    It's a description of a function that calls itself.
- Using it usually doesn't make programs more efficient or faster. They are just an elegant way of solving problems.

### Call Stack
    The call stack is a fundamental concept in programming, especially in languages like C and C++, where it helps manage function calls and execution order. Think of it as a stack of books—every time a function is called, it gets "placed" on top of the stack. When a function finishes, it "pops off" the stack, allowing the program to return to the previous function.
Why its important?

1. Keeps track of function calls (When you call a function, it’s added to the stack, and its position there helps the program remember where it left off)
2. Manages memory (Once a function completes, all its local data is removed from memory, helping optimize memory usage)
3. Tracks program flow (for easier debugging)

- re-watched till 1:33:00

