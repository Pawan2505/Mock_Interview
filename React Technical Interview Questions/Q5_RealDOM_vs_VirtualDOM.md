
---

### **Question 5:** State the difference between Real DOM and Virtual DOM.

### **Answer:**

| **Real DOM**                                                                      | **Virtual DOM**                                                                   |
| --------------------------------------------------------------------------------- | --------------------------------------------------------------------------------- |
| Updates happen **slowly** because the entire page reloads when something changes. | Updates happen **faster** because only the changed part of the UI is updated.     |
| It allows **direct updates** to the HTML.                                         | It **does not update HTML directly**; instead, it updates the virtual copy first. |
| It uses **more memory** and processing power.                                     | It uses **less memory** and is more efficient.                                    |

---

### **In simple terms:**

The **Virtual DOM** is a lightweight copy of the **Real DOM**.
React uses it to make UI updates faster and smoother by changing only what’s necessary, instead of reloading the whole page.

---
