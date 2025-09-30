### **How to Write `display: flex` Using Bootstrap**

Bootstrap provides **utility classes** to apply `display: flex` and related properties **without writing custom CSS**.

1. **Make an element a flex container:**

```html
<div class="d-flex">
  <div>Item 1</div>
  <div>Item 2</div>
</div>
```

* `d-flex` → applies `display: flex`.

2. **Direction of items:**

```html
<div class="d-flex flex-column"> <!-- Column direction -->
  <div>Item 1</div>
  <div>Item 2</div>
</div>
```

* `flex-column` → vertical stacking (`flex-direction: column`).
* `flex-row` → horizontal stacking (default, optional).

3. **Alignment utilities:**

* `justify-content-start|center|end|between|around` → controls horizontal alignment.
* `align-items-start|center|end|stretch` → controls vertical alignment.

**Example:**

```html
<div class="d-flex justify-content-between align-items-center">
  <div>Left</div>
  <div>Right</div>
</div>
```

---

### **Interview Tip:**

"In Bootstrap, `d-flex` replaces `display: flex`, and utility classes like `flex-column`, `justify-content-*`, and `align-items-*` allow you to control the flex layout quickly without custom CSS."

---

