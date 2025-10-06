
### **Question 19:** Name two types of React components

### **Answer:**

React components can be divided into **two main types**:

1. **Function Components:**

   * Written as a **JavaScript function**.
   * Can use **hooks** like `useState` and `useEffect` to manage state and lifecycle.
   * Simpler and easier to read.

2. **Class Components:**

   * Written as a **JavaScript class** extending `React.Component`.
   * Can have **state** and **lifecycle methods** like `componentDidMount`.
   * More traditional way of creating components.

---

### **Example:**

```javascript
import React, { Component, useState } from "react";

// Function Component
function GreetingFunction() {
  return <h2>Hello from Function Component!</h2>;
}

// Class Component
class GreetingClass extends Component {
  render() {
    return <h2>Hello from Class Component!</h2>;
  }
}

export { GreetingFunction, GreetingClass };
```

**Explanation for Interview:**

* **Function component**: simple, uses hooks, no `this`.
* **Class component**: uses state and lifecycle methods, older style.


