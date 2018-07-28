<html>
    <head>
        <link rel="stylesheet" href="./stylesheets/iAmManager.css"/>
        <link href="https://fonts.googleapis.com/css?family=Inconsolata" rel="stylesheet">
        <title>
            Manager
        </title>
    </head>
    <body>
        <div id="header">
            Bank Of RCC
        </div><br/>
        <h2>Manager Login</h2>
        <div id="lform">
            <form action="" method="post">
                <input type="text" id="m_uname" name="m_uname" placeholder="username" value="<?php if(isset($_POST['m_uname'])) echo $_POST['m_uname'];?>"/><br/>
                <input type="password" id="m_upass" name="m_upass" placeholder="password" value="<?php if(isset($_POST['m_upass'])) echo $_POST['m_upass'];?>"/><br/>
                <input type="submit" id="m_sbm_t" name="m_sbm_t" value="Login"/>
            </form>
        </div>
    </body>
</html>
<?php
    if(isset($_POST['m_sbm_t'])) {
        extract($_POST);
        require('connect.php');
        $db->query("SELECT * FROM manager_info WHERE ".
                   "name='$m_uname' AND pass='$m_upass'");
        if($db->affected_rows == 1) {
            echo "<div id=\"cform\">
            <form action=\"\" method=\"post\">
                <input type=\"text\" id=\"c_u_id\" name=\"c_u_id\" placeholder=\"Unique ID\"/><br/>
                <input type=\"text\" id=\"c_acc_num\" name=\"c_acc_num\" placeholder=\"Account Number\"/><br/>
                <input type=\"submit\" id=\"c_sbm_t\" value=\"Confirm\" name=\"c_sbm_t\"/><br/>
                <input type=\"hidden\" name=\"m_uname\" value=\"{$_POST['m_uname']}\"/><br/>
                <input type=\"hidden\" name=\"m_upass\" value=\"{$_POST['m_upass']}\"/><br/>
            </form></div>";
        }else {
            echo "<div id='cform'>Wrong username AND/OR password</div>";
        }
    }elseif(isset($_POST['c_sbm_t'])) {
        extract($_POST);
        require('connect.php');
        $db->query("UPDATE user_info SET ".
                   "user_active = 'Y' WHERE user_name = '$c_u_id' ".
                   "AND user_account = '$c_acc_num'");
        if($db->affected_rows == 1){
            $password = $db->query("SELECT user_pass FROM user_info WHERE user_name='$c_u_id' ".
                               "AND user_account = '$c_acc_num'")->fetch_all()[0][0];
            echo "<div id=\"cform\">Account Has Been Activated.<br/><b>Password is $password</b>.<form action=\"\" method=\"post\">
                    <input type=\"hidden\" name=\"m_uname\" value=\"{$_POST['m_uname']}\"/><br/>
                    <input type=\"hidden\" name=\"m_upass\" value=\"{$_POST['m_upass']}\"/><br/>
                    <input type=\"Submit\" id=\"m_sbm_t\"name=\"m_sbm_t\" value=\"Try Again!\"/>
                </form>;</div>";
        }else {
            echo "<div id=\"cform\">Error! Account Not Found! <form action=\"\" method=\"post\">
                    <input type=\"hidden\" name=\"m_uname\" value=\"{$_POST['m_uname']}\"/><br/>
                    <input type=\"hidden\" name=\"m_upass\" value=\"{$_POST['m_upass']}\"/><br/>
                    <input type=\"Submit\" id=\"m_sbm_t\"name=\"m_sbm_t\" value=\"Try Again!\"/>
                </form></div>";
        }
        
    }
?>