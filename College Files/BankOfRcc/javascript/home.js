function accountInfo(uid) {
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET","accountInformation.php?uid="+uid,true);
        xhttp.onreadystatechange = function(){
            if (xhttp.status == 200 && xhttp.readyState == 4) {
                document.getElementById("output").innerHTML = xhttp.responseText;
            }
        };
        xhttp.send();
    }
    function transHistory(uid) {
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET","transactionHistory.php?uid="+uid,true);
        xhttp.onreadystatechange = function(){
            if (xhttp.status == 200 && xhttp.readyState == 4) {
                document.getElementById("output").innerHTML = xhttp.responseText;
            }
        };
        xhttp.send();
    }
    function transMoney(uid) {
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET","transferMoney.php",true);
        xhttp.onreadystatechange = function(){
            if (xhttp.status == 200 && xhttp.readyState == 4) {
                document.getElementById("output").innerHTML = xhttp.responseText;
            }
        };
        xhttp.send();
    }
    function changePassword(uid) {
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET","changePassword.php?=",true);
        xhttp.onreadystatechange = function(){
            if (xhttp.status == 200 && xhttp.readyState == 4) {
                document.getElementById("output").innerHTML = xhttp.responseText;
            }
        };
        xhttp.send();
    }
    function transfer() {
        var from = document.getElementById("from").value;
        var to = document.getElementById("ran").value;
        var amount = document.getElementById("am").value;
        var pass = document.getElementById("yp").value;
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET","makeTransaction.php?from="+from+"&to="+to+"&amount="+amount+"&pass="+pass,true);
        xhttp.onreadystatechange = function(){
            if (xhttp.status == 200 && xhttp.readyState == 4) {
                document.getElementById("output").innerHTML = xhttp.responseText;
            }
        };
        xhttp.send();
    }
    function change() {
        var from = document.getElementById("from").value;
        var cpw = document.getElementById("cpw").value;
        var np = document.getElementById("np").value;
        var rnp = document.getElementById("rnp").value;
        
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET","makeChangePassword.php?from="+from+"&cpw="+cpw+"&np="+np+"&rnp="+rnp,true);
        xhttp.onreadystatechange = function(){
            if (xhttp.status == 200 && xhttp.readyState == 4) {
                document.getElementById("output").innerHTML = xhttp.responseText;
            }
        };
        xhttp.send();
    }
    function logout() {
        window.location.href = 'logout.php';
    }