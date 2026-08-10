# Sorting Algorithm

A **sorting algorithm** is used to rearrange a given array or list of elements in a particular order.

Common sorting algorithms can be classified into different categories.

## Comparison Based Sorting

Comparison-based sorting algorithms sort elements by comparing them with each other.

- Selection Sort
- Bubble Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Heap Sort
- Cycle Sort
- 3-Way Merge Sort

## Non-Comparison Based Sorting

Non-comparison-based sorting algorithms do not primarily sort elements by comparing pairs of elements.

- Counting Sort
- Comb Sort
- Tim Sort
- Bucket Sort
- Radix Sort
- Pigeonhole Sort

## Hybrid Sorting

Hybrid sorting algorithms combine techniques from multiple sorting algorithms.

- Intro Sort
- Tim Sort

---


## Bubble Sort Algorithm

**Bubble Sort** sorts an array by repeatedly comparing adjacent elements and swapping them when they are in the wrong order.

For ascending order, the larger elements gradually move toward the end of the array after every iteration.

This is often described as **pushing the heaviest or largest elements to the end**.

- **Time Complexity** = O(n²)
- **Space Complexity** = O(1)


### Operations

For an array of `n` elements:

```text
Outer loop  → n - 1 iterations
Inner loop  → n - 1, n - 2, n - 3, ..., 1 comparisons
```

Total comparisons:

```text
(n - 1) + (n - 2) + ... + 1
```

```text
= n(n - 1) / 2
```

Therefore:

```text
Time Complexity = O(n²)
```

### Example

Consider the array:

```text
7  3  2  8  1
```

#### Iteration 1

Compare adjacent elements from left to right.

```text
7  3  2  8  1
↑  ↑
```

Since `7 > 3`, swap them:

```text
3  7  2  8  1
```

Compare `7` and `2`:

```text
3  7  2  8  1
   ↑  ↑
```

Swap:

```text
3  2  7  8  1
```

Compare `7` and `8`:

```text
3  2  7  8  1
      ↑  ↑
```

No swap is required.

Compare `8` and `1`:

```text
3  2  7  8  1
         ↑  ↑
```

Swap:

```text
3  2  7  1  8
```

After iteration 1:

```text
3  2  7  1  8
```

The largest element `8` is now at the end.

#### Iteration 2

The last element is already sorted, so it does not need to be compared again.

```text
3  2  7  1  8
```

Compare `3` and `2`:

```text
2  3  7  1  8
```

Compare `3` and `7`:

```text
2  3  7  1  8
```

No swap.

Compare `7` and `1`:

```text
2  3  1  7  8
```

After iteration 2:

```text
2  3  1  7  8
```

#### Iteration 3

The last two elements are already sorted.

```text
2  3  1  7  8
```

Compare `2` and `3`:

```text
2  3  1  7  8
```

No swap.

Compare `3` and `1`:

```text
2  1  3  7  8
```

After iteration 3:

```text
2  1  3  7  8
```

#### Iteration 4

Compare `2` and `1`:

```text
1  2  3  7  8
```

The array is now sorted.

### Final Sorted Array

```text
1  2  3  7  8
```

### Important Observation

After every complete iteration of Bubble Sort:

```text
The largest unsorted element is placed at its correct position.
```

Therefore, the unsorted portion becomes smaller after every iteration.

---

### Questions

- QuestionID 7: Write a program to sort the given array of integers into ascending form using the Bubble Sort algorithm.

---

## Selection Sort Algorithm

**Selection Sort** repeatedly finds the smallest element from the unsorted portion of the array and places it at the beginning of that portion.

For ascending order:

1. Find the smallest element in the unsorted portion.
2. Swap it with the first element of the unsorted portion.
3. Move to the next position.
4. Repeat until the array is sorted.

- **Time Complexity** = O(n²)
- **Space Complexity** = O(1)

```text
One iteration → One swap
```

---

### Algorithm Example

Consider the array:

```text
7  8  3  1  2
```

#### Iteration 1

Find the smallest element in the entire array:

```text
7  8  3  1  2
         ↑
        1
```

Smallest element:

```text
1
```

Swap `1` with the first element `7`:

```text
1  8  3  7  2
```

Now `1` is in its correct position.

#### Iteration 2

Consider the remaining unsorted portion:

```text
1 | 8  3  7  2
    ---------
```

Find the smallest element:

```text
8  3  7  2
      ↑
      2
```

Swap `2` with `8`:

```text
1  2  3  7  8
```

#### Iteration 3

The remaining unsorted portion is:

```text
1  2 | 3  7  8
```

The smallest element is already `3`.

No effective swap is required.

```text
1  2  3  7  8
```

#### Iteration 4

The remaining unsorted portion is:

```text
1  2  3 | 7  8
```

The smallest element is already `7`.

The array remains:

```text
1  2  3  7  8
```

#### Final Sorted Array

```text
1  2  3  7  8
```

---

### Important Observation

In Selection Sort:

```text
Each iteration selects the smallest element
from the unsorted portion.
```

Then:

```text
The selected element is swapped into its correct position.
```

Therefore:

```text
One iteration → At most one swap
```

### Time Complexity

Selection Sort performs approximately:

```text
(n - 1) + (n - 2) + ... + 1
```

comparisons.

Therefore:

```text
Time Complexity = O(n²)
```

Selection Sort performs `O(n²)` comparisons in the best, average, and worst cases.

### Space Complexity

Selection Sort uses constant extra space:

```text
Space Complexity = O(1)
```

because it sorts the array in place.