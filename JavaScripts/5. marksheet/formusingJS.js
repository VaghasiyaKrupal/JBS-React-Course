document.getElementById("name").value = "Krupal"
document.getElementById("email").value = "krupal@gmail.com"
document.getElementById("phone").value = Math.round(Math.random() * 10000000000)
document.getElementById("address").value = "136, Surat, Gujarat"
document.getElementById("dob").value = "05-Oct-1996"
document.getElementById("gender").value = "Male"

document.getElementById("submit").addEventListener("click",function(){
    alert("Form data has been saved")
    
})

document.getElementById('submit').onclick = function() {
    alert('Button clicked!');
};