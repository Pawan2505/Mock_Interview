
### **41) What is Reduction in React?**

### **Answer:**

**Reduction** in React refers to **managing and updating state** using a **reducer function**.
It is commonly used with the **`useReducer` hook** in functional components or in **Redux** for global state management.

Reducers help handle **complex state logic** in a **predictable and structured way**.

---

### **Simple Example using `useReducer`:**

```javascript
import React, { useReducer } from "react";

// 1️⃣ Reducer function
const reducer = (state, action) => {
  switch (action.type) {
    case "INCREMENT":
      return { count: state.count + 1 };
    case "DECREMENT":
      return { count: state.count - 1 };
    default:
      return state;
  }
};

// 2️⃣ Component using useReducer
function Counter() {
  const [state, dispatch] = useReducer(reducer, { count: 0 });

  return (
    <div>
      <h2>Count: {state.count}</h2>
      <button onClick={() => dispatch({ type: "INCREMENT" })}>+</button>
      <button onClick={() => dispatch({ type: "DECREMENT" })}>-</button>
    </div>
  );
}

export default Counter;
```

---

### **Explanation for Interview:**

* `useReducer` provides a **structured way** to update state based on **actions**.
* Helps keep state logic **predictable**, especially when state has **multiple values or complex updates**.
* Common in **large applications** or when using **Redux** for global state.

