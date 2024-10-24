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

2. **Type selectors**

- A.K.A. Element selector will select all elements of the given element type.
- The syntax is just the name of the element:
```css
/* styles.css */
div {
    color: white;
}
```

3. **Class selectors**

- They will select  all elements with the given **class**, which is just an attribute you place on an HTML element.
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

4. **ID selectors**

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

5. **Grouping selector**

- Used when we have two groups of elements that share some of their style declarations.

- Syntax:

```css
/* selectors separated by a comma */
.read,
.unread {
  /* these are common declarations between all elements with classes read n unread */
  color: white;
  background-color: black;
}

.read {
  /* several unique declarations */
}

.unread {
  /* several unique declarations */
}
```

6. **Chaining selectors**

- Syntax:

```html
<!-- index.html -->

<div>
  <div class="subsection header">Latest Posts</div>
  <p class="subsection preview">This is where a preview for a post might go.</p>
</div>
```
Its styles.css file would look like
```css
/* styles.css */

.subsection.header {
  color: red;
}
```
- What .subsection.header does is it selects any element that has both the `subsection` and `header` classes. 
Notice how there isn’t any space between the `.subsection` and `.header` class selectors. This syntax basically 
works for chaining any combination of selectors, except for chaining more than one type selector.

- This can also be used to chain a class and an ID:
```html
<!-- index.html -->

<div>
  <div class="subsection header">Latest Posts</div>
  <p class="subsection" id="preview">
    This is where a preview for a post might go.
  </p>
</div>
```
```css
/* styles.css */

.subsection.header {
  color: red;
}

.subsection#preview {
  color: blue;
}
```

**NOTE**: In general, you can’t chain more than one type selector since an element can’t be two different types at once.

7. **Combinators** (Descendant Combinator)

- They allow us to combine multiple selectors differently than either grouping or chaining them, as they show a relationship between the selectors.
- There are four types of combinators in total, but for right now we’re going to only show you the **descendant combinator**.
- A descendant combinator will only cause elements that match the last selector to be selected if they also have an ancestor (parent, grandparent, etc.) that matches the previous selector.
- Another way to think of it is that child will only be selected if it is nested inside ancestor, regardless of how deep that nesting is.
- Which is represented in CSS by a single space between selectors.
- There’s really no limit to how many combinators you can add to a rule.
- Syntax:

```html
<!-- index.html -->

<div class="ancestor">
  <!-- A -->
  <div class="contents">
    <!-- B -->
    <div class="contents"><!-- C --></div>
  </div>
</div>

<div class="contents"><!-- D --></div>
```
```css
/* styles.css */

.ancestor .contents {
  /* some declarations */
}
```
**NOTE**: In the above example, the first two elements with the contents class (B and C) would be selected, but that last element (D) wouldn’t be.

## Properties (some of them)

1. **Color and background-color**
    
- The `color` property sets an element’s text color, while `background-color` sets the background color of an element. 
- Both of these properties can accept one of several kinds of values. A common one is a keyword, such as an actual color name like `red` or the `transparent` keyword.
- They also accept HEX, RGB, and HSL values.
- Syntax:
```css
p {
  /* hex example: */
  color: #1100ff;
}

p {
  /* rgb example: */
  color: rgb(100, 0, 127);
}

p {
  /* hsl example: */
  color: hsl(15, 82%, 56%);
}
```

