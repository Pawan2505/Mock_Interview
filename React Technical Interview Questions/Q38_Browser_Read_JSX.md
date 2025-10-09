

### **37) How can a browser read a JSX file?**

### **Answer:**

Browsers **cannot understand JSX** directly because it is not valid JavaScript.
Before execution, **JSX is converted (transpiled)** into **plain JavaScript** using a tool like **Babel**.
After conversion, the browser can easily read and execute the JavaScript code.

---

### **Example:**

**👉 JSX Code:**

```jsx
const element = <h2>Hello, JSX!</h2>;
```

**👉 After Babel Conversion:**

```javascript
const element = React.createElement("h2", null, "Hello, JSX!");
```

---

### **Explanation for Interview:**

* JSX is a **syntax extension** used to write HTML-like code inside JavaScript.
* Browsers can **only understand JavaScript**, not JSX.
* Therefore, **Babel converts JSX into React.createElement()** calls before sending it to the browser.

---
