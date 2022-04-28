<?php
include("db_operation.php");
$fname=$_REQUEST['txtFname'];
$lname=$_REQUEST['txtLname'];
$dept=$_REQUEST['txtDept'];
$batch=$_REQUEST['txtBatch'];
$sub1=$_REQUEST['txtSub1'];
$sub2=$_REQUEST['txtSub2'];
$sub3=$_REQUEST['txtSub3'];
$sub4=$_REQUEST['txtSub4'];
$sub5=$_REQUEST['txtSub5'];

$obj=new db_operation();
$conn=$obj->db_connection();

if($conn===false)
{
  die("error couldn't connect".mysqli_connect_error());
}
$obj->db_insert($fname,$lname,$dept,$batch,$sub1,$sub2,$sub3,$sub4,$sub5);



$res=$obj->db_execute();

/*
if($res==1)
 {


session_start();
$_SESSION['email']=$email;
 
}*/

?>
