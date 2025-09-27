function formData() {
    document.getElementById("name").value = "Krupal"
    document.getElementById("email").value = "krupal@gmail.com"
    document.getElementById("phone").value = Math.round(Math.random() * 10000000000)
    document.getElementById("address").value = "136, Surat, Gujarat"
    document.getElementById("dob").value = "1996-10-05";
    document.getElementById("gender").value = "male";

}

function clearForm() {
    document.getElementById("name").value = "";
    document.getElementById("email").value = "";
    document.getElementById("phone").value = "";
    document.getElementById("address").value = "";
    document.getElementById("dob").value = "";
    document.getElementById("gender").value = "";
}

document.getElementById("submit").addEventListener("click", function () {
    alert("Form data has been saved");

    clearForm();
});