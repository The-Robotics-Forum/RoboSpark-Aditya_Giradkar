<?php
include('db.php');
if (isset($_POST['submit'])) {

  $id=$_POST['st_id'];

  $query="SELECT * FROM `student` where `id`='$id'";

  $run=mysqli_query($con,$query);

  $getRow = mysqli_fetch_assoc($run);


  echo "<br><br><br>Student Details for <b>Student ID ".$id;
  echo "<br>";
  echo "<label><b>Name : </b></label>".$getRow['name'];
  echo "<br>";
  echo "<label><b>Branch : </b></label>".$getRow['branch'];
  echo "<br>";
  echo "<label><b>CGPA : </b></label>".$getRow['cgpa'];




}


 ?>
