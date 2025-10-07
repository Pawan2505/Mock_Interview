
### **Question 24:** Explain the use of the arrow function in React

### **Answer:**

In React, **arrow functions** are used to write **short and clean functions**, especially for **event handling**.
They also **automatically handle the `this` keyword**, so we don’t have to bind it manually in class components.

Without arrow functions, `this` may become **undefined**, which causes an error when accessing state or methods.

---

### ** Incorrect Example (Without Arrow Function)**

```javascript
import React from "react";

class Welcome extends React.Component {
  constructor() {
    super();
    this.state = { name: "Pawan" };
  }

  // Normal function (no auto 'this' binding)
  changeName() {
    this.setState({ name: "Maurya" }); // 'this' will be undefined
  }

  render() {
    return (
      <div>
        <h2>Hello, {this.state.name}</h2>
        <button onClick={this.changeName}>Change Name</button>
      </div>
    );
  }
}

export default Welcome;
```

**Explanation:**

* In this example, `changeName()` is a **normal function**, so it doesn’t automatically bind `this`.
* When the button is clicked, `this` becomes **undefined**, and React throws an error:

  > “Cannot read properties of undefined (reading 'setState')”.
* To fix this, you’d need to manually bind it in the constructor:

  ```javascript
  this.changeName = this.changeName.bind(this);
  ```

---

### **Correct Example (With Arrow Function)**

```javascript
import React from "react";

class Welcome extends React.Component {
  state = { name: "Pawan" };

  // Arrow function automatically binds 'this'
  changeName = () => {
    this.setState({ name: "Maurya" });
  };

  render() {
    return (
      <div>
        <h2>Hello, {this.state.name}</h2>
        <button onClick={this.changeName}>Change Name</button>
      </div>
    );
  }
}

export default Welcome;
```

**Explanation for Interview:**

* The arrow function automatically binds `this` to the component, so it works correctly.
* Now, when the button is clicked, `setState` runs properly.
* Arrow functions make React code **cleaner, shorter, and error-free**.
