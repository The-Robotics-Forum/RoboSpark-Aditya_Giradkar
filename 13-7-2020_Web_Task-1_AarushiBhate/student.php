<?php
session_start();
include('db.php');
if(isset($_POST['submit']))
{
    $Stud_id=$_POST['Stud_id'];
    $query="SELECT * FROM `user1` WHERE `Stud_id`='$Stud_id'";
    $run= mysqli_query($con,$query);
    $row= mysqli_num_rows($run);

    if($row == 1)
    {
        $_SESSION['Stud_id']=$Stud_id;
        $stud_row= mysqli_fetch_assoc($run);
        $Stud_id= $stud_row['Stud_id'];
        $Stud_name=$stud_row['Stud_name'];
        $Branch=$stud_row['Branch'];
        $CGPA=$stud_row['CGPA'];

    }
   
}
?>

<html lang="en">
    <head>
    <meta charset="UTF-8"/>
    <title>STUDENT INFO </title>
    </head>
    <body>
	<link rel="stylesheet" href="student.css">
    <link href="https://fonts.googleapis.com/css2?family=Do+Hyeon&family=Righteous&display=swap" rel="stylesheet">    
    <div class="info-page">
        <?php if($row==1){
            echo "<h2>","<b>","Welcome ".$Stud_name ," !" ,"</b>","</h2>";
            echo "<h3>","<b>","STUDENT DETAILS: ","</b>","</h3>";
            echo "ID:--->                 ".$Stud_id;
            echo "<h4>","<br>", "Name:--->  ".$Stud_name, "</h4>";
            echo "<h4>","<br>", "Branch:--->".$Branch;"</h4>";
            echo "<h4>","<br>", "CGPA:--->  ".$CGPA;"</h4>";
         }
         else
         {
             echo "<h4>","STUDENT ID NOT FOUND","</h4>";
         }
         ?>
    </div>
    </body>
</html>
