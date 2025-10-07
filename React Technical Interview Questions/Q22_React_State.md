

### **Question 22:** What is React State?  

### **Answer:**  
**State** in React is an **object that stores data** or information about the component.  
It **controls how the component behaves and looks**.  
When the state changes, React **automatically re-renders** the component to show the new data.  

---

### **Example:**

```javascript
import React, { useState } from "react";

function Counter() {
  const [count, setCount] = useState(0); // state variable

  return (
    <div>
      <h2>Count: {count}</h2>
      <button onClick={() => setCount(count + 1)}>Increase</button>
    </div>
  );
}

export default Counter;
```

**Explanation for Interview:**  
- `useState(0)` creates a state variable `count` with initial value `0`.  
- When we call `setCount`, the state updates.  
- React automatically re-renders the UI to show the new count.  

