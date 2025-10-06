
### **Question 16:** Explain the term Higher-Order Component (HOC)

### **Answer:**

A **Higher-Order Component (HOC)** is a **function that takes a component and returns a new component**.
It is an **advanced technique** used to **reuse component logic** across multiple components.

HOCs are **not part of React’s core API** — they are a **pattern** that comes from React’s compositional nature.

---

### **Example:**

```javascript
import React from "react";

// HOC: adds extra info to a component
function withGreeting(WrappedComponent) {
  return function () {
    return (
      <div>
        <h2>Hello!</h2>
        <WrappedComponent />
      </div>
    );
  };
}

// Original component
function User() {
  return <p>I am a user component.</p>;
}

// Enhanced component using HOC
const EnhancedUser = withGreeting(User);

export default EnhancedUser;
```

**Explanation for Interview:**

* `withGreeting` is a **HOC** that adds a greeting above any component.
* `User` is the original component.
* `EnhancedUser` is the new component with **extra logic**.
* HOCs help **reuse logic** without changing the original component.

