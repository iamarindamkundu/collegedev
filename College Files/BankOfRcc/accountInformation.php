<?php
    require('connect.php');
    $r = $db->query("SELECT * FROM user_info WHERE user_name='{$_GET['uid']}'");
    $r = $r->fetch_all(MYSQLI_ASSOC);
    ?>
    <table id="aitable">
        <tr>
            <th>
                UserName
            </th>
            <th>
                AccountNumber
            </th>
            <th>
                IFSC
            </th>
            <th>
                CIF_Number
            </th>
            <th>
                Phone
            </th>
            <th>
                Balance
            </th>
        </tr>
        <?php
            foreach($r as $rows) {
                ?>
                <tr>
                    <td>
                        <?php echo $rows['user_name'];?>
                    </td>
                    <td>
                        <?php echo $rows['user_account'];?>
                    </td>
                    <td>
                        <?php echo $rows['user_ifsc'];?>
                    </td>
                    <td>
                        <?php echo $rows['user_cif'];?>
                    </td>
                    <td>
                        <?php echo $rows['user_phone'];?>
                    </td>
                    <td>
                        <?php echo $rows['user_balance'];?>
                    </td>
                </tr>
        <?php
            }
        ?>
    </table>