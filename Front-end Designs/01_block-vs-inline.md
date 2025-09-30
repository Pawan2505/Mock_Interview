Explain the difference between a block-level and inline element, and how can you force one to behave like the other?


### **Difference between Block-level and Inline elements**

1. **Block-level elements**

   * Always start on a **new line**.
   * Take up the **full width** available (stretch across the container).
   * Examples: `<div>`, `<p>`, `<h1>–<h6>`, `<section>`.

2. **Inline elements**

   * Do **not start on a new line**.
   * Only take up as much **width as their content**.
   * Examples: `<span>`, `<a>`, `<strong>`, `<em>`.

---

### **How to force one to behave like the other?**

You can use the CSS **`display` property**:

* To make an inline element behave like block:

  ```css
  span {
    display: block;
  }
  ```

* To make a block element behave like inline:

  ```css
  div {
    display: inline;
  }
  ```

* Or, you can use `display: inline-block;` → which keeps elements inline **but allows block-like properties** (like width, height, margin, padding).

---

