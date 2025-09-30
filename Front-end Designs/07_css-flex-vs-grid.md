### **Flexbox (Flexible Box)**

* Flexbox is a **one-dimensional layout system** in CSS.
* It is used to **align and distribute space** among items **in a row or column**.
* Helps create **responsive layouts** easily.

**Example:**

```css
.container {
  display: flex;
  justify-content: space-between;
  align-items: center;
}
```

**Use case:** Aligning a navigation menu horizontally or centering items in a row or column.

---

### **CSS Grid**

* Grid is a **two-dimensional layout system**.
* It allows you to create **rows and columns** simultaneously.
* Best for **complex layouts** like web page sections or dashboards.

**Example:**

```css
.container {
  display: grid;
  grid-template-columns: 1fr 2fr 1fr;
  gap: 10px;
}
```

**Use case:** Creating magazine-style layouts, photo galleries, or dashboards.

---

### **Key Difference**

| Feature      | Flexbox                         | Grid                             |
| ------------ | ------------------------------- | -------------------------------- |
| Dimensions   | One-dimensional (row OR column) | Two-dimensional (row AND column) |
| Best for     | Simple layouts, alignment       | Complex layouts, grid structure  |
| Axis control | Main-axis & cross-axis          | Rows & columns simultaneously    |

---

### **Interview Tip:**

"Flexbox is for **one-dimensional layouts**, aligning items in a row or column, while Grid is for **two-dimensional layouts**, managing rows and columns together."

---

