
### **Question 26:** Explain Pure Components in ReactJS

### **Answer:**

A **Pure Component** in React is a component that **renders only when its props or state change**.
It **automatically implements a shallow comparison** of props and state to prevent **unnecessary re-rendering**, which makes your app **faster**.

**Key Points:**

* Extends `React.PureComponent` instead of `React.Component`.
* Performs a **shallow comparison** of props and state.
* Helps **optimize performance** for components that receive the same props frequently.

---

### 💻 **Simple Example:**

```javascript
import React, { PureComponent } from "react";

class User extends PureComponent {
  render() {
    console.log("User component rendered");
    return (
      <div>
        <h2>User Name: {this.props.name}</h2>
      </div>
    );
  }
}

export default User;
```

```javascript
// Usage in Parent Component
import React, { useState } from "react";
import User from "./User";

function App() {
  const [name, setName] = useState("Pawan");

  return (
    <div>
      <User name={name} /> {/* PureComponent will only re-render if 'name' changes */}
      <button onClick={() => setName("Pawan")}>Change Name</button>
    </div>
  );
}

export default App;
```

**Explanation for Interview:**

* If you click the button and the `name` **does not change**, the `User` component **will not re-render**.
* Pure Components help **avoid unnecessary rendering**, improving **performance**.


