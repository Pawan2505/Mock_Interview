**Q: Explain the difference between a block-level and inline element, and how can you force one to behave like the other?**

**Answer:**

* **Block-level elements** always start on a **new line** and take up the **full width** of their container. Examples are `<div>`, `<p>`, and `<h1>` to `<h6>`.

* **Inline elements** stay **in the same line** as other content and only take up as much space as needed. Examples are `<span>`, `<a>`, `<strong>`, and `<em>`.

**Making one behave like the other:**

* Use the CSS `display` property.

  * To make an inline element act like a block:

    ```css
    span {
      display: block;
    }
    ```
  * To make a block element act like inline:

    ```css
    div {
      display: inline;
    }
    ```
  * You can also use `inline-block`, which keeps the element in the same line but allows block-style properties like width, height, and padding.

---


