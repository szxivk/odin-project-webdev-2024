const container = document.querySelector("#container");

const paragraph = document.createElement("p");

paragraph.classList.add("para");

paragraph.textContent = "Hey I’m red!";

paragraph.style.cssText = "color: red;";

container.appendChild(paragraph);

const heading = document.createElement("h3");

heading.classList.add("heading");

heading.textContent = "I’m a blue h3!";

heading.style.cssText = "color: blue;";

container.appendChild(heading);

const blackContainer = document.createElement("div");

blackContainer.style.cssText = "background: pink ; border: solid black 1px; ";

const innerHeading = document.createElement("h1");

innerHeading.textContent = "I'm in a div";

blackContainer.appendChild(innerHeading);

const meToo = document.createElement("p");

meToo.textContent = "ME TOO!";

blackContainer.appendChild(meToo);

container.appendChild(blackContainer);
