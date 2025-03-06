function alertFunction() {
  alert("YAY! YOU DID IT!");
}

const btn = document.querySelector("#btn");
const btn2 = document.querySelector("#btn2");
const btn3 = document.querySelector("#btn3");

btn.onclick = () => alertFunction();

btn2.addEventListener("click", alertFunction);

btn3.addEventListener("click", function (e) {
  e.target.style.background = "green";
});
