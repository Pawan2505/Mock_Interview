
### **Question 25:** State the main difference between Props and State

### **Answer:**

| **Props**                                                 | **State**                                                            |
| --------------------------------------------------------- | -------------------------------------------------------------------- |
| Props are **passed from parent to child** components.     | State is **managed within the component** itself.                    |
| Props are **read-only / immutable**.                      | State is **mutable**, can be updated using `setState` or `useState`. |
| Used to **pass data and communicate** between components. | Used to **store and manage data** inside the component.              |
| Functional components can receive props as arguments.     | Functional components use `useState` to manage state.                |
| Cannot be changed by the component receiving them.        | Can be changed by the component itself.                              |

---

### **Example:**

```javascript
import React, { useState } from "react";

// Child Component receiving props
function User({ name }) {
  return <h2>User Name: {name}</h2>;
}

// Parent Component using state
function App() {
  const [userName, setUserName] = useState("Alice");

  return (
    <div>
      <User name={userName} /> {/* Passing state as props */}
      <button onClick={() => setUserName("Bob")}>Change Name</button>
    </div>
  );
}

export default App;
```

**Explanation for Interview:**

* `userName` is a **state** in `App` that can be changed.
* `User` receives the **state as props**, which it **cannot change**.
* Shows clearly how **Props are read-only** and **State is mutable**.

