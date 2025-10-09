

### **43) How can you share data between components?**

### **Answer:**

You can share data between components in React using:

* **State** – for managing data inside a component.
* **Props** – for passing data from **parent to child**.
* **Context API** – for **sharing data globally** across multiple components without prop drilling.

---

### **Example:**

```jsx
import React from "react";

function Parent() {
  const [name, setName] = React.useState("Pawan");
  return <Child userName={name} />;
}

function Child(props) {
  return <h2>Hello, {props.userName}</h2>;
}

export default Parent;
```

**Explanation:**
Here, the **Parent** component passes the `name` value to the **Child** component using **props**.
The **Child** receives it as `props.userName` and displays it.
