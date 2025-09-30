**Q: How many ways can you add CSS to a project?**

**Answer:**

1. **Inline CSS** – Add styles directly to an element using the `style` attribute.

```html
<p style="color: red; font-size: 16px;">Hello World</p>
```

2. **Internal CSS** – Write styles inside a `<style>` tag in the `<head>` of the HTML.

```html
<head>
  <style>
    p { color: blue; font-size: 18px; }
  </style>
</head>
```

3. **External CSS** – Write styles in a separate `.css` file and link it using `<link>`.

```html
<head>
  <link rel="stylesheet" href="style.css">
</head>
```

**Tip:**

* Inline → quick but not good for big projects.
* Internal → okay for single-page styling.
* External → best practice for maintainable and reusable code.

---
