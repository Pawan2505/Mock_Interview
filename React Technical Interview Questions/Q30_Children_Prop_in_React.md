
### **Question 29:** What are `children` props in React?

### **Answer:**

In React, **`children`** is a **special prop** that lets you **pass components or elements inside another component**.
It allows components to **wrap other components** dynamically.

**Key Points:**

* `children` is automatically available in **all components**.
* Useful for creating **reusable and flexible components** like modals, cards, or layouts.
* Can contain **elements, text, or even other components**.

---

### **Example:**

```javascript
import React from "react";

// Parent component using children
function Card({ children }) {
  return <div style={{ border: "1px solid black", padding: "10px" }}>{children}</div>;
}

// Usage
function App() {
  return (
    <Card>
      <h2>Title</h2>
      <p>This is inside the card using children prop.</p>
    </Card>
  );
}

export default App;
```

**Explanation for Interview:**

* The `<Card>` component doesn’t need to know **what content will be inside it**.
* Whatever we put between `<Card> ... </Card>` becomes `children`.
* This makes components **reusable and flexible**.

