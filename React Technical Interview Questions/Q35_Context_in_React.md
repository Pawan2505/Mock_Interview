
### **35) What is Context in React?**

### **Answer:**

**React Context** helps you **share data globally** between multiple components **without passing props manually** through every level (known as **prop drilling**).
It’s commonly used for **themes, user authentication, and language settings** that need to be accessed by many components.

---

### **Example:**

```javascript
import React, { createContext, useContext } from "react";

// 1️⃣ Create Context
const UserContext = createContext();

// 2️⃣ Create a Parent Component (Provider)
function App() {
  return (
    <UserContext.Provider value="Pawan Maurya">
      <Profile />
    </UserContext.Provider>
  );
}

// 3️⃣ Child Component (Consumer)
function Profile() {
  const user = useContext(UserContext); // Access context data
  return <h2>Hello, {user}!</h2>;
}

export default App;
```

---

### **Explanation for Interview:**

* `createContext()` creates a **Context object**.
* `Provider` makes the data **available to all child components**.
* Any component can access that data using **`useContext()` hook** (in function components).
* This helps avoid **prop drilling**, making code cleaner and more maintainable.

