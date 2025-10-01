
---

# What is an Array?

An **Array** is a **collection of elements of the same data type** stored at **contiguous (continuous) memory locations**.

* It allows us to store multiple values in a single variable instead of declaring separate variables.
* Each element in an array is accessed using an **index** (starting from 0).

Example in C:

```c
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    printf("First element: %d\n", arr[0]);
    printf("Last element: %d\n", arr[4]);
    return 0;
}
```

Output:

```
First element: 10
Last element: 50
```

---

# Types of Arrays

### 1. **One-Dimensional Array (1D Array)**

* Stores elements in a **single row** (like a list).
* Example: `int arr[5] = {1, 2, 3, 4, 5};`

Representation:
`[1] [2] [3] [4] [5]`

---

### 2. **Two-Dimensional Array (2D Array)**

* Stores data in the form of **rows and columns** (like a matrix or table).
* Example:

  ```c
  int arr[2][3] = {
      {1, 2, 3},
      {4, 5, 6}
  };
  ```

Representation:

```
1  2  3
4  5  6
```

---

### 3. **Multi-Dimensional Array**

* Arrays with more than 2 dimensions.
* Example: 3D array (like a cube of data):

  ```c
  int arr[2][2][2] = {
      {{1,2},{3,4}},
      {{5,6},{7,8}}
  };
  ```

---

# Array Types:

1. **1D Array** → Linear list
2. **2D Array** → Matrix (rows & columns)
3. **Multi-Dimensional Array** → 3D or more dimensions

---

