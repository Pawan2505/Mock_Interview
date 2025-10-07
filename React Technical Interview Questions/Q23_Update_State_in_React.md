
### **Question 22:** How can you update state in ReactJS?

### **Answer:**

In React, you can **update the state** using the **state updater function** — for example, `setState` in class components or `setSomething` from `useState` in function components.

When the state is updated, React **automatically re-renders** the component with the new data.

---

### **Example (Function Component):**

```javascript
import React, { useState } from "react";

function Counter() {
  const [count, setCount] = useState(0);

  function handleIncrease() {
    setCount(count + 1); // update state
  }

  return (
    <div>
      <h2>Count: {count}</h2>
      <button onClick={handleIncrease}>Increase</button>
    </div>
  );
}

export default Counter;
```

**Explanation for Interview:**

* We use `useState` to create state.
* `setCount` updates the state value.
* When the state changes, the component **automatically re-renders**.

---

### 💻 **Class Component Example (for knowledge):**

```javascript
this.setState({ count: this.state.count + 1 });
```

