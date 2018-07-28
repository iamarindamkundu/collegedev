<?php
    session_start();
    require('connect.php');
    $_SESSION['accnum'] = $db->query("SELECT user_account FROM user_info WHERE user_name='{$_SESSION['uid']}'")->fetch_all()[0][0];
?>
<html>
    <head>
        <link rel="stylesheet" href="./stylesheets/home.css"/>
        <link href="https://fonts.googleapis.com/css?family=Inconsolata" rel="stylesheet">
        <title>
            Home
        </title>
    </head>
    <body>
        <input id="from" type="hidden" value="<?php echo $_SESSION['accnum'];?>"/>
        <div id="header">
            Welcome <?php echo $_SESSION['accnum'];?>
        </div><br/>
        <div id="ai" onclick="accountInfo('<?php echo $_SESSION['uid'];?>')">
            Account<br/>Information
        </div>
        <div id="th" onclick="transHistory('<?php echo $_SESSION['accnum'];?>')">
            Transaction<br/>
            History
        </div>
        <div id="tm" onclick="transMoney('<?php echo $_SESSION['uid'];?>')">
            Transfer<br/>
            Money
        </div>
        <div id="cp" onclick="changePassword('<?php echo $_SESSION['uid'];?>')">
            Change<br/>
            Password
        </div>
        <div id="lo" onclick="logout()">
            LogOut
        </div>
        <div id="output">
            
        </div>
    </body>
</html>
<script src="./javascript/home.js">
</script>