**Q: What is the CSS Box Model?**

**Answer:**
The CSS Box Model shows that **every HTML element is like a box** made of four parts: **content, padding, border, and margin**. Knowing this helps with spacing and layout on a page.

**Layers:**

1. **Content** – The text, image, or actual content inside the box.
2. **Padding** – Space between content and border; adds inner spacing.
3. **Border** – The edge around the padding.
4. **Margin** – Space outside the border; separates the element from others.

**Visual (for whiteboard or quick explanation):**

```
+----------------+
|    Margin      |
|  +----------+  |
|  | Border   |  |
|  | +------+ |  |
|  | |Padding| | |
|  | |Content| | |
|  | +------+ |  |
|  +----------+  |
+----------------+
```

**Tip:**

* Content → core, Padding → inner space, Border → edge, Margin → outer space.
* Use `box-sizing: border-box;` to include padding and border in element width.

---

