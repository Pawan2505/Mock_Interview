**Q: How do you write `display: flex` using Bootstrap?**

**Answer:**
Bootstrap has **utility classes** that let you use flex without writing custom CSS.

1. **Make a container flex:**

```html
<div class="d-flex">
  <div>Item 1</div>
  <div>Item 2</div>
</div>
```

* `d-flex` → applies `display: flex`.

2. **Set direction:**

```html
<div class="d-flex flex-column">...</div>
```

* `flex-column` → vertical stack
* `flex-row` → horizontal stack (default)

3. **Align items:**

* `justify-content-*` → horizontal alignment
* `align-items-*` → vertical alignment

**Example:**

```html
<div class="d-flex justify-content-between align-items-center">
  <div>Left</div>
  <div>Right</div>
</div>
```

**Tip:**
"`d-flex` is flex, and classes like `flex-column`, `justify-content-*`, and `align-items-*` help quickly control layout without CSS."

---

