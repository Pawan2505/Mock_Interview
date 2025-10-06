
### **Question 18:** Explain `yield` in JavaScript

### **Answer:**

The **`yield`** keyword is used **inside a generator function** to **pause its execution** and **return a value**.
Later, the generator can **resume** from where it was paused.

**Key Points:**

* Works only inside **generator functions** (functions declared with `function*`).
* **Pauses** the function execution at `yield`.
* Can **send and receive values** when resumed.
* Useful for **lazy evaluation, asynchronous tasks, or sequences**.

---

### **Example:**

```javascript
// Generator function
function* numbers() {
  yield 1;
  yield 2;
  yield 3;
}

const numGen = numbers();

console.log(numGen.next().value); // 1
console.log(numGen.next().value); // 2
console.log(numGen.next().value); // 3
```

**Explanation for Interview:**

* `numbers` is a **generator function**.
* `yield` pauses execution and returns a value.
* Each call to `next()` **resumes** the function from where it left off.


