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


#### Most common notations.

- *O*(1) | Ω(1) ---> Constant
- *O*(*log*(N)) | Ω(*log*(N)) ---> Logarithmic
- *O*(N) | Ω(N) ---> Linear
- *O*(N2) | Ω(N2) --> Quadratic

## Sorting Algorithms

- Following were covered in this weeks lecture:

|              | Merge Sort | Selection Sort | Bubble Sort |
| :---------------- | :------: | :----: | :----: |
| Worst case       |   *O*(N*log*(N))   | *O*(N<sup>2</sup>) | *O*(N<sup>2</sup>) |
| Best case      |   Ω(N*log*(N))    | Ω(N<sup>2</sup>) | Ω(N) |

**NOTE**: Although Merge Sort is a better/faster algorithm than the other two, Bubble Sort is a better option than Merge Sort when we need to check whether a given array is sorted or not in some cases.

- In the above table, for Selection Sort and merge sort, Θ notation can be used to indicate that they performs the same for both their worst and best case. 
E.g. Θ(N*log*(N)) can be used for merge sort to show its time Complexity.

# Structs
