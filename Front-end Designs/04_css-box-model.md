### **What is the CSS Box Model?**

The **CSS Box Model** describes how every HTML element is represented as a rectangular box consisting of **four layers**: **content, padding, border, and margin**. Understanding this model is essential for layout, spacing, and styling elements.

---

### **Layers of the Box Model:**

1. **Content** – The actual content of the element (text, image, etc.).
2. **Padding** – Space between the content and the border; increases the clickable area without affecting other elements.
3. **Border** – The edge of the element; surrounds the padding.
4. **Margin** – Space outside the border; separates the element from other elements.

---

### **Visual Representation (ASCII-style for interview whiteboard)**

```
+---------------------------+
|        Margin             |
|  +---------------------+  |
|  |      Border         |  |
|  |  +---------------+  |  |
|  |  |   Padding     |  |  |
|  |  |  +---------+  |  |  |
|  |  |  | Content |  |  |  |
|  |  |  +---------+  |  |  |
|  |  +---------------+  |  |
|  +---------------------+  |
+---------------------------+
```

---

### **Interview Tip:**

* You can explain:
  "The content is the core, padding adds inner space, border surrounds it, and margin pushes it away from other elements. Changing any of these affects layout and spacing."
* Mention **`box-sizing: border-box;`** if asked about controlling width including padding and border.

---

