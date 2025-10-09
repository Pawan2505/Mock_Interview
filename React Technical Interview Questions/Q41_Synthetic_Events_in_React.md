
### **41) Explain the term Synthetic Events**

**Answer:**
Synthetic Events in React are **cross-browser wrappers** around the browser’s native events.
They make sure events behave the same way in all browsers and provide useful methods like:

* `preventDefault()` – prevents the default browser behavior
* `stopPropagation()` – stops the event from bubbling up

---

### **Example 1: Using `preventDefault()`**

```javascript
function Button() {
  const handleClick = (event) => {
    event.preventDefault();
    alert("Button clicked!");
  };

  return <button onClick={handleClick}>Click Me</button>;
}
```

---

### **Example 2: Using `stopPropagation()`**

```javascript
function EventDemo() {
  const handleParentClick = () => {
    alert("Parent Div Clicked!");
  };

  const handleChildClick = (event) => {
    event.stopPropagation(); // Stops the click event from reaching parent
    alert("Child Button Clicked!");
  };

  return (
    <div onClick={handleParentClick} style={{ padding: "20px", border: "1px solid black" }}>
      <button onClick={handleChildClick}>Click Me</button>
    </div>
  );
}
```

