<?php
$con=mysqli_connect('localhost','root','','robospark');
if(!$con)
 {
    echo "connection error".mysqli_connect_error();
 }
 else
 {
   echo "Database connection successful<br>";
 }



 ?>
