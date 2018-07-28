function validateLogin() {
    var l_u_name = document.lf.l_u_name;
    var l_u_pass = document.lf.l_u_pass;
    
    var result = false;
    
    var pattern = new RegExp("^RCC[0-9]{5}$");

    if (!pattern.test(l_u_name.value)) {
        alert("ERROR in username");
        l_u_name.focus();
    }else {
        pattern = new RegExp("[0-9@^!a-zA-Z_]{6,}");
        if (!pattern.test(l_u_pass.value)) {
            alert("ERROR in Password.\nPassword can contain Alphabets,digits,and @,^,!,_.\nMinimum length is 6");
            l_u_pass.focus();
        }else {
            result = true;
        }
    }
    return result;
}

function validateSignUp() {
    var s_a_num = document.sf.s_a_num;
    var s_cif_num = document.sf.s_cif_num;
    var s_ifsc = document.sf.s_ifsc;
    var s_p_num = document.sf.s_p_num;
    
    var result = false;
    
    var pattern = new RegExp("^RCC[0-9]{5}$");

    if (!pattern.test(s_a_num.value)) {
        alert("AccountNumber must start with RCC followed by 5 digits");
        s_a_num.focus();
    }else {
        pattern = new RegExp("^[0-9]{3}$");
        if (!pattern.test(s_cif_num.value)) {
            alert("CIF number must be of 3 digits");
            s_cif_num.focus();
        }else {
            pattern = new RegExp("^[0-9]{3}RCC$");
            if (!pattern.test(s_ifsc.value)) {
                alert("IFSC must start with 3 digits and end with RCC");
                s_ifsc.focus();
            }else {
                pattern = new RegExp("^[0-9]{10}$");
                if (!pattern.test(s_p_num.value)) {
                    alert("Phone Number must consists of 10 digits");
                    s_p_num.focus();
                }else{
                    result = true;
                }
            }
        }
    }
    return result;
}

function putCode(){
    document.sf.s_c_code.value = document.sf.s_country.value;
}
