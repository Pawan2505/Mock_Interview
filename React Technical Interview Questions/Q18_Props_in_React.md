
### **Question 18:** What are Props in ReactJS?

### **Answer:**

**Props** (short for **properties**) are a way to **pass data from a parent component to a child component**.
They act as a **communication channel between components**.

**Key Points:**

* Always **flow from parent to child**.
* **Immutable** — the child cannot change them.
* Useful for **reusing components** with different data.

---

### **Example:**

```javascript
import React from "react";

// Child Component
function User({ name, age }) {
  return (
    <div>
      <h2>Name: {name}</h2>
      <p>Age: {age}</p>
    </div>
  );
}

// Parent Component
function App() {
  return <User name="Pawan" age={25} />;
}

export default App;
```

**Explanation for Interview:**

* `App` passes `name` and `age` as **props** to the `User` component.
* `User` just **displays the data** — it cannot change it.
* Props make components **flexible and reusable**.

