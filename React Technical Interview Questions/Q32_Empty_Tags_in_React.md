

### **32) What is the use of Empty Tags in React?**

### **Answer:**

In React, **empty tags (`<> </>`)** are used to create **Fragments**.
Fragments allow you to **group multiple elements together** without adding any **extra HTML node** (like a `<div>`) to the DOM.

They make your code **cleaner** and prevent **unnecessary nesting**.

---

### **Example:**

```javascript
import React from "react";

function Info() {
  return (
    <>
      <h1>Hello, React!</h1>
      <p>This is inside a fragment without any extra div.</p>
    </>
  );
}

export default Info;
```

---

### **Explanation for Interview:**

* Normally, React components must **return a single element**.
* If you don’t want to wrap your content inside a `<div>`, you can use **empty tags** (fragments).
* This keeps the **DOM clean** and is **lightweight**.


