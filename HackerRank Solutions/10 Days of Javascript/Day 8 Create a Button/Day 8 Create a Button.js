var button = document.getElementById("btn");
button.addEventListener("click",function() {
    var currentValue = this.innerHTML;
    this.innerHTML = parseInt(currentValue)+1;
});