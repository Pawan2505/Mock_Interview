
### **Question 29:** Explain the use of `key` in React lists

### **Answer:**

In React, the **`key`** is a special **attribute** used when rendering **lists of elements**.
It helps React **identify which items have changed, been added, or removed**, so it can **update the UI efficiently**.

**Key Points:**

* `key` should be **unique among siblings**.
* Helps **optimize performance** by reducing unnecessary re-renders.
* **Does not get passed as a prop** to the component.

---

### **Example:**

```javascript
import React from "react";

function UserList() {
  const users = ["Pawan", "Manish", "Pankaj"];

  return (
    <ul>
      {users.map((user, index) => (
        <li key={index}>{user}</li> // 'key' helps React track items
      ))}
    </ul>
  );
}

export default UserList;
```

**Explanation for Interview:**

* Without `key`, React uses **index-based reconciliation**, which can cause **unexpected UI behavior** when items are added or removed.
* With `key`, React can **efficiently update only the changed items** instead of re-rendering the entire list.

