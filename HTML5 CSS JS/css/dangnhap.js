function register(e){
    event.preventDefault();
    var name=document.getElementsById("name").value;
    var email=document.getElementsById("email").value;
    var password=document.getElementsById("password").value;
    let usre={
        usrename:name,
        email: email,
        password: password,
    }
    var json =JSON.stringify(usre);
    localStorage.setItem(name,usre);
    alert("dang ky thanh cong");
}+
function login(e){
    event.preventDefault();
    var name=document.getElementsById("name").value;
    var email=document.getElementsById("email").value;
    var password=document.getElementsById("password").value;
    var usre=localStorage.getItem(usre);
    var data=JSON.stringify(usre);
    if(usre==null){
        alert("vui long nhap name end password");
    }
    else if(name==data.usrename,email==data.email,password==data.password){
alert("dang nhap thanh cong");
window.localStorage.herf="webcafe.html"
    }
    else{
        alert("dang nhap that bai")
    }

}