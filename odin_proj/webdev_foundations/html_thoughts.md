# HTML Foundations

- HTML and CSS:
- HTML is the raw data that a webpage is built out of. All the text, links, cards, lists, and buttons are created in HTML. CSS is what adds style to those plain elements. HTML puts information on a webpage, and CSS positions that information, gives it color, changes the font, and makes it look great!
-  they are only concerned with presenting information. They are not used to program any logic. JavaScript is a programming language and it’s used to make webpages do things.
- HTML markups are enhanced by CSS and JavaScript, which is why it’s recommended that you learn this programming language first. it allows you as a website owner to create the basic structure of you website
- While CSS is a static programming language, it can be used to make your website appear visually pleasing and modern.
- Along with the presentation of HTML, CSS can also be used to alter the layout and formatting of your website.
- While HTML provides the structure for a website and CSS allows you to control the presentation of a site, the JavaScript programming language gives you the tools that you need to alter the behavior of different elements that are found on a website page.


## Elements and Tags

- HTML (HyperText Markup Language) defines the structure and content of the webpages (which are basically like documents). its made up of tags.
- Almost all elements on an HTML page are just pieces of content wrapped in opening and closing HTML tags.
- eg,. a full paragragph element looks like following:
  ```html
  <p>some text content</p>
  ```
  - Opening tags `<keyword>` tell the browser that this is the start of an HTML element. `<p>` in above example.
  - Closing tags tell the browser where an element ends. They are almost the same as opening tags; the only difference is that they have a forward slash before the keyword. `</keyword>`. `</p>` in above example.
  - `some text content` represents content wrapped within the opening and closing tags.
  - The opening and closing tags tell the browser what content the element contains. The browser can then use that information to determine how it should interpret and format the content.
- [Predefined tags in HTML](https://developer.mozilla.org/en-US/docs/Web/HTML/Element).
- It is important to use the correct tags for content. Using the correct tags can have a big impact on two aspects of your sites:
  - how they are ranked in search engines; and
  - how accessible they are to users who rely on assistive technologies, like screen readers, to use the internet.
- Using the correct elements for content is called **semantic HTML**.

### Void Elements

- Some HTML elements do not have a closing tag.
- like: `<br>` or `<img>`.
- No closing tag means they can’t wrap content like other tags do. therefore, they are void of any content, there is nothing inside of them.

**NOTE**: You might also see these referred to as self-closing tags. But those are just void elements with a forward slash(/) at the end like: `<br /> `or `<img />`, but the latest version of the HTML specification discourages their use and considers them invalid.

### HTML Boilerplate

- All HTML documents have the same basic structure or boilerplate that needs to be in place before anything useful can be done

**NOTE**: We should always name the HTML file that will contain the homepage of our website index.html. This is because web servers will by default look for an index.html page when users land on our websites – and not having one will cause big problems.

**TIP**: VSCode has a built-in shortcut you can use for generating all the boilerplate in one go. Please note that this shortcut only works while editing a file with the .html extension or a text file with the HTML language already selected. To trigger the shortcut, delete everything in the index.html file and just enter ! on the first line. This will bring up a couple of options. Press the Enter key to choose the first one, and voila, you should have all the boilerplate populated for you.

- boilerplate will look as follows:
```html
<!DOCTYPE html> <!--HTML page starts with a doctype declaration. this is how we write comment in HTML-->

<html lang="en"> <!--This is what’s known as the root element of the document-->
    <!--lang above represents an HTML attribute-->
    <head>
        <meta charset="UTF-8">
        <title>My First Webpage</title>
    </head>

    <body>

    </body>
</html>
```
- The `<head>` element is where we put important meta-information about our webpages, and stuff required for our webpages to render correctly in the browser. Inside the `<head>`, we should not use any element that displays content on the webpage.
-  The `<body>` element is where all the content that will be displayed to users will go - the text, images, lists, links, and so on.