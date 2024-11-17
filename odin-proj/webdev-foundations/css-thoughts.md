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

### **Color and background-color**
    
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

### **Typography and text-align**

1. font-family
- `font-family` can be a single value or a comma-separated list of values that determine what font an element uses.
- Each font will fall into one of two categories, either a “font family name” like `"Times New Roman"` (we use quotes due to the whitespace between words) or a “generic family name” like `serif` (generic family names never use quotes).
- it’s best practice to include a list of values for this property, starting with the font you want to be used most and ending with a generic font family as a fallback.
- e.g. `font-family: "Times New Roman", serif;`

2. font-size
- will set the size of the font. When giving a value to this property, the value should not contain any whitespace.
- e.g. `font-size: 22px;` has no space between “22” and “px”.

3. font-weight
- affects the boldness of text, assuming the font supports the specified weight.
- This value can be a keyword, e.g. `font-weight: bold;`, or a number between 1 and 1000, e.g. `font-weight: 700;` (the equivalent of bold)

4. text-align
- It will align text horizontally within an element, and you can use the common keywords you may have come across in word processors as the value for this property, e.g. `text-align: center;`

### Image height and width

**NOTE**: By default, an `<img>` element’s `height` and `width` values will be the same as *the actual image file’s height and width*.
-  If you wanted to adjust the size of the image without causing it to lose its proportions, you would use a value of `auto` for the height property and adjust the width value, syntax would look like:
```css
img {
  height: auto;
  width: 500px;
}
```
**NOTE**: It’s best to include both of these properties and the HTML attributes for image elements, even if you don’t plan on adjusting the values from the image file’s original ones. Reason for it is -When these values aren’t included, if an image takes longer to load than the rest of the page contents, it won’t take up any space on the page at first but will suddenly cause a drastic shift of the other page contents once it does load in. Explicitly stating a `height` and `width` prevents this from happening, as space will be “*reserved*” on the page and appear blank until the image loads.

## Adding CSS to HTML

#### External CSS
  External CSS is the most common method you will come across, and it involves creating a separate file for the CSS and linking it inside of an HTML’s opening and closing `<head>` tags with a void `<link>` element:

Syntax:

```html
<!-- index.html -->

<head>
  <link rel="stylesheet" href="styles.css">
</head>
```
```css
/* styles.css */

div {
  color: white;
  background-color: black;
}

p {
  color: red;
}
```
The `href` attribute is the location of the CSS file, either an absolute URL or, what you’ll be utilizing, a URL relative to the location of the HTML file. In our example above, we are assuming both files are located in the same directory. The `rel` attribute is required, and it specifies the relationship between the HTML file and the linked file.

**Pros of using external CSS:**

- It keeps our HTML and CSS separated, which results in the HTML file being smaller and making things look cleaner.
- We only need to edit the CSS in one place, which is especially handy for websites with many pages that all share similar styles.

#### Internal CSS
  Internal CSS (or embedded CSS) involves adding the CSS within the HTML file itself instead of creating a completely separate file. With the internal method, you place all the rules inside of a pair of opening and closing `<style>` tags, which are then placed inside of the opening and closing `<head>` tags of your HTML file.

Syntax:

```html
<!-- index.html -->

<head>
  <style>
    div {
      color: white;
      background-color: black;
    }

    p {
      color: red;
    }
  </style>
</head>
<body>
  ...
</body>
```

#### Inline CSS
  Inline CSS makes it possible to add styles directly to HTML elements, though this method isn’t as recommended:

Syntax:

```html
<body>
  <div style="color: white; background-color: black;">...</div>
</body>
```

**NOTE**: Any inline CSS will override the other two methods, which can cause unexpected results. (While we won’t dive into it here, this can actually be taken advantage of.)


## The cascade of CSS

    The cascade is what determines which rules actually get applied to our HTML. There are different factors that the cascade uses to determine this.

**NOTE**: This topic needs a-lot of examples to understand -click this [link](https://www.theodinproject.com/lessons/foundations-the-cascade#the-cascade-of-css) to recall.

We will examine three of these factors:

1. **Specificity**

- A CSS declaration that is more specific will take precedence over less specific ones.
- Inline styles, have the highest specificity compared to selectors.
- An ID selector will always beat any number of class selectors, a class selector will always beat any number of type selectors, and a type selector will always beat any number of less specific selectors.
- A rule with a greater number of selectors of the same type will take precedence over another rule with fewer selectors of the same type.
- When comparing selectors, you may come across special symbols for the universal selector (`*`) as well as combinators (`+`, `~`, `>`, and an empty space). These symbols do not add any specificity in and of themselves.

2. **Inheritance**

- It refers to certain CSS properties that, when applied to an element, are inherited by that element’s descendants, even if we don’t explicitly write a rule for those descendants.

- The exception to this is when directly targeting an element, as this always beats inheritance

Syntax: 

```html
<!-- index.html -->

<div id="parent">
  <div class="child"></div>
</div>
```

```css
/* styles.css */

#parent {
  color: red;
}

.child {
  color: blue;
}
```
Despite the `parent` element having a higher specificity with an `ID`, the `child` element would have the `color: blue` style applied since that declaration directly targets it, while `color: red` from the `parent` is only inherited.

3. **Rule order**

- After every other factor has been taken into account, When there are still multiple conflicting rules targeting an element. **Whichever rule was the last defined is the winner**.

Syntax:

```css
/* styles.css */

.alert {
  color: red;
}

.warning {
  color: yellow;
}
```
For an element that has both the `alert` and `warning` classes, the cascade would run through every other factor, including inheritance (none here) and specificity (neither rule is more specific than the other). Since the `.warning` rule was the last one defined, and no other factor was able to determine which rule to apply, it’s the one that gets applied to the element.


## Inspecting HTML and CSS

    Being able to inspect and debug your HTML and CSS is critical for frontend development.

### Using The inspector for Inspecting elements

To open up the inspector, you can right-click on any element of a webpage and click “Inspect” or press `F12`.

**NOTE**: The `Ctrl + Shift + C` shortcut opens the Elements panel in inspector mode. This mode shows you helpful tooltips when you hover over elements on a page. You can also click any element to view its CSS in the Elements > Styles tab.

Use this [link](https://developer.chrome.com/docs/devtools/overview/) to recall about different Chrome DevTools and how to use them.

### DOM vs. HTML
    The browser parses the HTML and creates a tree of objects, that tree model to represent HTML is known as Document Object Model (or DOM).

*"DOM" usually means the current state the HTML page is in*. So if you, for example, have a HTML page and add a tag with javascript.

The actual HTML of the page is still the same, but the "DOM" however will be changed.

Use this [link](https://developer.chrome.com/docs/devtools/dom/) to learn how to edit DOM in elements tab in the Inspector.




