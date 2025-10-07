
### **Question 20:** Explain Synthetic Event in ReactJS

### **Answer:**

A **Synthetic Event** in React is a **wrapper around the browser’s native event**.
It makes events **work the same way** across **all browsers**.

React creates its own event system called **SyntheticEvent** to handle events like clicks, key presses, etc., efficiently and consistently.

---

### **Example:**

```javascript
import React from "react";

function ClickButton() {
  function handleClick(event) {
    console.log("Button clicked!");
    console.log(event.type); // SyntheticEvent type
  }

  return <button onClick={handleClick}>Click Me</button>;
}

export default ClickButton;
```

**Explanation for Interview:**

* Here, `onClick` triggers a **synthetic event** created by React.
* React uses this system for **cross-browser compatibility** and **better performance**.
* The event object (`event`) is not the native DOM event but a **SyntheticEvent**.


