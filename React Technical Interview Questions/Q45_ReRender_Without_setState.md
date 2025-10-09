
### **45) How can you re-render a component without using setState()?**

### **Answer:**

You can force a component to re-render even if its state or props haven’t changed.

* **In class components**, use **`forceUpdate()`**.
* **In functional components**, use a **dummy state** to trigger a re-render.

---

### **Example 1: Class Component (Counter)**

```jsx
import React from "react";

class Counter extends React.Component {
  count = 0;

  increment = () => {
    this.count += 1; // increment counter
    this.forceUpdate(); // re-render component
  };

  render() {
    return (
      <div>
        <h2>Count: {this.count}</h2>
        <button onClick={this.increment}>Increase</button>
      </div>
    );
  }
}

export default Counter;
```

---

### **Example 2: Functional Component (Counter)**

```jsx
import React, { useState } from "react";

function Counter() {
  const [dummy, setDummy] = useState(0); // dummy state
  const [count, setCount] = useState(0);

  const increment = () => {
    setCount(prev => prev + 1);  // update actual count
    setDummy(prev => prev + 1);  // trigger re-render
  };

  return (
    <div>
      <h2>Count: {count}</h2>
      <button onClick={increment}>Increase</button>
    </div>
  );
}

export default Counter;
```

---

### **Explanation:**

* In **class components**, `forceUpdate()` triggers a re-render even without using state.
* In **functional components**, updating **any state** (dummy or real) will re-render the component.
* Here, we replaced the time example with a **counter** to make it simpler and easy to explain in an interview.


