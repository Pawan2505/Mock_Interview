### **Ways to Add CSS to a Project**

1. **Inline CSS** – Styles are added directly to the HTML element using the `style` attribute.

```html
<p style="color: red; font-size: 16px;">Hello World</p>
```

2. **Internal CSS (Embedded CSS)** – Styles are written inside a `<style>` tag in the `<head>` section of the HTML.

```html
<head>
  <style>
    p {
      color: blue;
      font-size: 18px;
    }
  </style>
</head>
```

3. **External CSS** – Styles are written in a separate `.css` file and linked to the HTML using `<link>`.

```html
<head>
  <link rel="stylesheet" href="style.css">
</head>
```

---

### **Interview Tip:**

* Inline CSS → Quick, but **not recommended** for large projects.
* Internal CSS → Good for single-page styling.
* External CSS → **Best practice** for maintainability, reusability, and cleaner code.

---

