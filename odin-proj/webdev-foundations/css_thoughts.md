# CSS Foundations
    CSS is used to style the structure of a webpage we created using HTML.
Basic syntax:
```css
div.bold-text {
    font-weight: 700;
}
```
**NOTE**: `<div>` is one of the basic HTML elements. It is an empty container.

CSS is made up of various rules. These rules are made up of a selector (`div.bold-text` above) and a semicolon-separated list of declarations, with each of those declarations being made up of a property–value pair (`font-weight: 700` above).

## Selectors

    They refer to the HTML elements to which CSS rules apply.
The most common ones include:

1. **Universal selector**

- It will select elements of any type, hence the name “universal”.
- The syntax for it is a simple asterisk `*`:
```css
/* asterisk here is the universal selector - this is how we write comments in css btw */
* {
    color: purple;
}
```

2. Type selectors

- A.K.A. Element selector will select all elements of the given element type.
- The syntax is just the name of the element:
```css
/* styles.css */
div {
    color: white;
}
```

3. Class selectors

- They will select  all elements with the given `class`, which is just an attribute you place on an HTML element.
- We use a period immediately followed by the case-sensitive value of the class attribute.
- Syntax:
```html
<!-- index.html -->
<div class"alert-text">please agree to our terms of service.</div>
```
```css
/* styles.css */
.alert-text {
    color: red;
}
```
**NOTE**:  Classes aren’t required to be specific to a particular element, so you can use the same class on as many elements as you want. Another thing you can do with the class attribute is to add multiple classes to a single element as a space-separated list, such as `class="alert-text severe-alert"`.

4. ID selectors

- They are similar to class selectors.
- They select an element with the given ID, which is another attribute you place on an HTML element.
- For IDs, instead of a period, we use a hashtag immediately followed by the case-sensitive value of the ID attribute. 
- Syntax:
```html
<!-- index.html -->
<div id="title">My Awesome 90's Page</div>
```
```css
/* styles.css */
#title {
  background-color: red;
}
```
**NOTE**: you should use IDs sparingly (if at all). using ID makes sense or is needed, when we need to take advantage of specificity or have links redirect to a section on the current page.

5. The grouping selector
