
### **31) What are Error Boundaries?**

### **Answer:**

**Error Boundaries** are special React components that **catch JavaScript errors** in their child components during rendering.
They help prevent the **entire app from crashing** by showing a **fallback UI** instead.
They are mostly used to **log errors** and show **user-friendly messages** when something goes wrong.

---

### **Example:**

```javascript
import React from "react";

// Step 1: Create Error Boundary Component
class ErrorBoundary extends React.Component {
  constructor(props) {
    super(props);
    this.state = { hasError: false };
  }

  static getDerivedStateFromError(error) {
    // Update state so the next render shows the fallback UI
    return { hasError: true };
  }

  componentDidCatch(error, info) {
    console.log("Error caught by ErrorBoundary:", error);
  }

  render() {
    if (this.state.hasError) {
      return <h2>Something went wrong!</h2>;
    }
    return this.props.children;
  }
}

// Step 2: Create a Component that throws error
function BuggyComponent() {
  throw new Error("App Crashed!");
}

// Step 3: Use ErrorBoundary to wrap components
function App() {
  return (
    <ErrorBoundary>
      <BuggyComponent />
    </ErrorBoundary>
  );
}

export default App;
```

---

### **Explanation for Interview:**

* `ErrorBoundary` catches errors in **child components** like `BuggyComponent`.
* If any error occurs, instead of crashing the app, it displays a **fallback message** (“Something went wrong!”).
* You can also log the error for debugging.

