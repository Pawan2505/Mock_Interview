

### **42) When should you use class components instead of function components?**

### **Answer:**

You should use **class components** when your component needs features like:

* **Lifecycle methods** (for example: `componentDidMount`, `componentDidUpdate`)
* **State handling** (before React Hooks were added)

But today, **function components** are mostly used because Hooks make them powerful and easier to write.

---

### **Example (Class Component):**

```jsx
import React from "react";

class Welcome extends React.Component {
  state = { message: "Hello, World!" };

  componentDidMount() {
    console.log("Class Component Mounted");
  }

  render() {
    return <h2>{this.state.message}</h2>;
  }
}

export default Welcome;
```

---

### **Example (Function Component with Hooks):**

```jsx
import React, { useState, useEffect } from "react";

function Welcome() {
  const [message, setMessage] = useState("Hello, World!");

  useEffect(() => {
    console.log("Function Component Mounted");
  }, []);

  return <h2>{message}</h2>;
}

export default Welcome;
```
