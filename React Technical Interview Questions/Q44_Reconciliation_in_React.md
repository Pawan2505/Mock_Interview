
### **44) Explain the term Reconciliation**

### **Answer:**

**Reconciliation** is the process React uses to compare the **current Virtual DOM** with the **previous Virtual DOM**.
React then updates **only the parts of the actual DOM** that have changed instead of re-rendering the whole page — making it faster and more efficient.

---

### **Example:**

```jsx
function App() {
  const [text, setText] = React.useState("Hello");

  return (
    <div>
      <p>{text}</p>
      <button onClick={() => setText("Welcome")}>Change Text</button>
    </div>
  );
}
```

**Explanation:**
When you click the button, only the text inside `<p>` changes.
React compares the new Virtual DOM with the old one and updates just that part — **this process is called reconciliation.**
