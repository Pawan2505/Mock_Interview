
### **Question 15:** What is a callback function?

### **Answer:**

A **callback function** is a function you **pass to another function** so it can run **after that function finishes**.

In React, you can use a callback to run code **after state updates**, because `useState` is asynchronous.

---

### **Example:**

```javascript
import React, { useState, useEffect } from "react";

function Counter() {
  const [count, setCount] = useState(0);

  // Callback runs after 'count' changes
  useEffect(() => {
    if (count > 0) {
      console.log("Count updated to:", count);
    }
  }, [count]);

  return (
    <div>
      <h1>Count: {count}</h1>
      <button onClick={() => setCount(count + 1)}>Increment</button>
    </div>
  );
}

export default Counter;
```

**Explanation for Interview:**

* Click **Increment**, `count` updates.
* `useEffect` runs **after the state changes**, acting like a **callback**.
* Logs the **new count** to the console.

