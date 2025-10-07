
### **Question 27:** What kind of information controls a component in React?

### **Answer:**

A React component is mainly controlled by **two types of information**:

1. **Props (Properties):**

   * Passed from **parent to child**.
   * **Immutable**, used to render UI or pass data between components.

2. **State:**

   * Managed **inside the component itself**.
   * **Mutable**, used to control the component’s **behavior and UI** dynamically.

**In short:**

> A component’s output (UI) depends on its **props** and **state**.

---

### **Example:**

```javascript
import React, { useState } from "react";

// Child component controlled by props
function User({ name }) {
  return <h2>User Name: {name}</h2>;
}

// Parent component with state
function App() {
  const [userName, setUserName] = useState("Alice");

  return (
    <div>
      <User name={userName} /> {/* Controlled by props */}
      <button onClick={() => setUserName("Bob")}>Change Name</button> {/* Controlled by state */}
    </div>
  );
}

export default App;
```

**Explanation for Interview:**

* `userName` (state) controls what is displayed in `App`.
* `User` displays data received via **props**.
* Together, **props + state control the component** and determine its rendered output.

