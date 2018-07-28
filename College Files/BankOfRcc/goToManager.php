<?php
    session_start();
?>
<html>
<head>
    <title>GoToManager</title>
    <link rel="stylesheet" href="./stylesheets/index.css"/>
    <link href="https://fonts.googleapis.com/css?family=Inconsolata" rel="stylesheet"> 
</head>
<body>
    <h3>
        Your Account is not acctivated.<br/>
        Go to your bank manager with this the following information.
    </h3>
    <table border="1">
        <tr>
            <th>
                Unique ID
            </th>
            <th>
                Account Number
            </th>
        </tr>
        <tr>
            <td>
                <?php echo $_SESSION['uid'];?>
            </td>
            <td>
                <?php echo $_SESSION['accnum'];?>
            </td>
        </tr>
    </table>
    <h3>
        This unique id is also your <i>username</i><br/>
        If you ever forget this username you are screwed
    </h3>
</body>