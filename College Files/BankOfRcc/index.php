<html>
    <head>
        <title>BankOfRCC</title>
        <link rel="stylesheet" href="./stylesheets/index.css"/>
        <link href="https://fonts.googleapis.com/css?family=Inconsolata" rel="stylesheet"> 
    </head>
    <body>
        <div id="header">
            Bank Of RCC
        </div><br/>
        <marquee>
            Home Loan At Low Cost
        </marquee><br/><br/>
        <marquee>
            Car Loan At Very Low Cost
        </marquee><br/><br/>
        <marquee>
            Educational Loan Without any Cost
        </marquee>
        <div id="mid">
            <div id="login_section">
                <form action="" method="post" name="lf" onsubmit="return validateLogin()">
                    <input id="l_u_name" type="text" name="l_u_name" placeholder="Username" /><br/>
                    <input id="l_u_pass" type="password" name="l_u_pass" placeholder="password"/><br/>
                    <input type="submit" id="l_sbm_t" name="l_sbm_t" value="Login"/>
                </form>
            </div>
            <div id="signup_section">
                <form action="" method="post" name="sf" onsubmit="return validateSignUp()">
                    <input id="s_a_num" type="text" name="s_a_num" placeholder="Account Number"/>
                    <input id="s_cif_num" type="text" name="s_cif_num" placeholder="CIF Number"/>
                    <input id="s_ifsc" type="text" name="s_ifsc" placeholder="IFSC Code"/><br/>
                    <select id="s_country" onchange="putCode()" name="s_country">
                        <option>Select Country</option>
                        <option value="+91">India</option>
                        <option value="+1">USA</option>
                    </select>
                    <input id="s_c_code" type="text" name="s_c_code" readonly/>
                    <input id="s_p_num" type="text" name="s_p_num" placeholder="Phone Number"/>
                    <input type="submit" id="s_sbm_t" name="s_sbm_t" value="Sign Up"/>
                </form>
            </div>
        </div>
    </body>
</html>
<?php
    require('connect.php');
    session_start();
    if(isset($_POST['s_sbm_t'])) {
        extract($_POST);
        $temp_uname = $s_a_num;
        $temp_pword = time();
        $query = "INSERT INTO user_info ".
               "VALUES('$temp_uname','$temp_pword','$s_a_num','$s_ifsc','$s_cif_num','$s_p_num','N',1000)";
        $db->query($query);
        if($db->affected_rows == 1) {
            $_SESSION['accnum'] = $s_a_num;
            $_SESSION['uid'] = $temp_uname;
            header('Location: goToManager.php');
        }
    }elseif(isset($_POST['l_sbm_t'])) {
        extract($_POST);
        $r = $db->query("SELECT * FROM user_info WHERE user_name='$l_u_name' AND user_pass='$l_u_pass'");
        $r = $r->fetch_all(MYSQLI_ASSOC);
        if($db->affected_rows == 1){
            print_r($r);
            $_SESSION['uid'] = $l_u_name;
            if($r[0]['user_active'] == 'N')
                header('Location: goToManager.php');
            elseif($r[0]['user_active'] == 'Y')
                header('Location: home.php');
        }
    }
?>
<script src="./javascript/index.js">
</script>