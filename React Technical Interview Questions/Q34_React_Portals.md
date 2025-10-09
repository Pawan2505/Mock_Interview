

### **34) What are React Portals?**

### **Answer:**

**React Portals** allow you to **render child components into a different DOM node** that exists **outside the parent component hierarchy**.
They are commonly used for creating **modals, popups, tooltips, or dropdowns**, where you want the UI to visually appear above everything else.

--

### **Example:**

**HTML File (index.html):**

```html
<body>
  <div id="root"></div>
  <div id="modal-root"></div> <!-- Portal target -->
</body>
```

**React Components:**

```javascript
import React from "react";
import ReactDOM from "react-dom";

// Modal Component using Portal
function Modal({ children }) {
  return ReactDOM.createPortal(
    <div style={{ background: "rgba(0,0,0,0.5)", padding: "20px" }}>
      {children}
    </div>,
    document.getElementById("modal-root")
  );
}

function App() {
  return (
    <div>
      <h1>Welcome to React Portals</h1>
      <Modal>
        <h2>This content is rendered using a Portal!</h2>
      </Modal>
    </div>
  );
}

export default App;
```

---

### **Explanation for Interview:**

* The `<Modal>` content is **not rendered inside `#root`**, but inside **`#modal-root`** (a separate DOM node).
* This helps when you want certain elements to **appear above everything else**, regardless of CSS or parent structure.
* Portals are great for **popups, modals, alerts, and tooltips**.


