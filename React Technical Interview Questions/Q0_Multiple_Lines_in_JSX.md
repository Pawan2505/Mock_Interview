
### **40) What can be done when there is more than one line of expression in JSX?**

### **Answer:**

When you have **multiple lines of JSX**, you must **wrap them in parentheses `( )`** to make it a valid JavaScript expression.
This helps maintain readability and avoids syntax errors.

### **Example:**

```jsx
return (
  <div>
    <h1>Hello</h1>
    <p>Welcome to React</p>
  </div>
);
```

### 💡 **Explanation:**

The parentheses ensure that all JSX elements are grouped together and properly returned as a single unit from the function or render method.

