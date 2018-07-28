<?php
    require('connect.php');
    $db->query("SELECT * FROM user_info WHERE user_account='{$_GET['from']}' AND user_pass='{$_GET['cpw']}'");
    if($db->affected_rows == 1){
        if ($_GET['np'] == $_GET['rnp']) {
            $db->query("UPDATE user_info SET user_pass='{$_GET['np']}' WHERE user_account='{$_GET['from']}'");
            echo "<div style=\"width:300px;margin: auto;margin-top:100px;font-size:20px;border: 3px solid;border-color: #8E4497;\">PassWord is Changed</div>";
        }else {
            echo "<div style=\"width:300px;margin: auto;margin-top:100px;font-size:20px;border: 3px solid;border-color: #8E4497;\">New Password is not Re-Typed Properly</div>";
        }
    }else {
        echo "<div style=\"width:300px;margin: auto;margin-top:100px;font-size:20px;border: 3px solid;border-color: #8E4497;\">Current Password Does not Match</div>";
    }
?>