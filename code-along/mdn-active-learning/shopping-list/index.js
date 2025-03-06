const list = document.querySelector("ul");

const inputItem = document.querySelector("#item");

const addBtn = document.querySelector("button");

addBtn.onclick = () => addItem(inputItem.value);

function addItem(item) {
  if (item === "") {
    alert("You can't add a empty item to the list!");
    return;
  }

  inputItem.value = "";
  const listItem = document.createElement("li");

  listItem.setAttribute("style", "list-style-type: none;");

  const listSpan = document.createElement("span");

  const cancelBtn = document.createElement("button");

  listItem.appendChild(cancelBtn);
  listItem.appendChild(listSpan);

  listSpan.textContent = " " + item;

  cancelBtn.textContent = "X";

  list.appendChild(listItem);

  cancelBtn.addEventListener("click", () => {
    list.removeChild(listItem);
  });

  inputItem.focus(); // when a item is entered, it lets users quickly write another item -otherwise user would have to click the input box again to write an item
}
