
---

# What is a String?

A **string** is a **sequence of characters** stored in memory.

* In **C language**, a string is represented as a **character array** that ends with a special character **`\0` (null character)**.
* Strings are used to store text like names, sentences, etc.

Example: `"Hello"` is stored as:

```
H   e   l   l   o   \0
```

---

# Definition of String:

**"A string in C is a one-dimensional array of characters terminated by a null character (`\0`)."**

---

# Syntax of String

### 1. **Declaration of String**

```c
char string_name[size];
```

### 2. **Initialization of String**

```c
char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};   // manual with null
char str2[] = "Hello";                           // shortcut (auto adds \0)
```

---

# Example

```c
#include <stdio.h>
int main() {
    char name[] = "Pawan";
    printf("My name is: %s\n", name);
    return 0;
}
```

**Output:**

```
My name is: Pawan
```

---


