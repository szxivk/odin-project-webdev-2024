# Algorithms

## Searching and Sorting (and *O* and Ω notations)

1. **Linear Search**: To find what we are searching for a computer checks in each and every elements of an array, one by one
until it find it.

**NOTE**: Computer can only look at one piece of information at a time. It doesn't have birds eye view of the array.

2. **Binary Search**: Best applied when array (or data-set) is sorted. It is a faster searching algorithm.

#### **Q**: how do we show which algorithm is better than the other?

- Here we use the *O* (said as Big-O), Ω, and Θ notations.
- Computer scientists like to think of things as being on the order of some number of steps

- For above search algorithms:

|              | Linear Search | Binary Search |
| :---------------- | :------: | :----: |
| What's (approx.) the greatest number of steps this algo will ever take       |   *O*(N)   | *O*(*log*(N)) |
| What's (approx.) the fewest number of steps this algo will ever take       |   Ω(1)   | Ω(1) |

- Ω(1) - denotes algo takes finite/fixed number of steps in the best case


#### Most common notations.

- *O*(1) | Ω(1)
- *O*(*log*(N)) | Ω(*log*(N))
- *O*(N) | Ω(N)
- *O*(N2) | Ω(N2)
