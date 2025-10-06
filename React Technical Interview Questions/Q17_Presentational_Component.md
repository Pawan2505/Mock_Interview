### **Question 17:** Explain the Presentational Component

### **Answer:**

A **Presentational Component** is a component whose main job is to **display UI (HTML/JSX)**.
It focuses on **how things look** rather than handling the app’s logic or state.

**Key points:**

* Receives **data via props**.
* Does **not manage its own state** (mostly stateless).
* Used for **markup and layout**.
* Easy to **reuse** and **test**.

---

### **Example:**

```javascript
import React from "react";

// Presentational Component
function UserCard({ name, age }) {
  return (
    <div>
      <h2>User Name: {name}</h2>
      <p>Age: {age}</p>
    </div>
  );
}

// Using the component
function App() {
  return <UserCard name="Pawan" age={25} />;
}

export default App;
```

**Explanation for Interview:**

* `UserCard` only **renders the UI** based on the props (`name` and `age`).
* It **does not have its own state or logic**.
* Perfect example of a **presentational component**.


