 <?php
    date_default_timezone_set('Asia/Kolkata');
    $db = new mysqli("localhost","root","mysql","bankOfRcc");
    $user_info = $db->query("SELECT * FROM user_info");
    $transactions = $db->query("SELECT * FROM user_info");
?>
