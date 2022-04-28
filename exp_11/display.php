<!DOCTYPE html>
<html lang="en">
<head>
<style>
 table, th, td {
  border:1px solid black;
}
  </style>
</head>
<body>
  <table >
<th scope="col">Sl No</th> 
    <th scope="col">Course Title</th>
    <th scope="col">year</th>
      <th scope="col">Mark</th>     
      <th scope="col">Grade</th>
      <th scope="col">Status</th> 
</body>
<h1> MarkList</h1>
<?php
include("db_operation.php");

$obj=new db_operation();
$conn=$obj->db_connection();



if($conn===false)
{
  die("error couldn't connect".mysqli_connect_error());
}
function gradeCheck($mark)
{
  
  if($mark>90)
  {
    $grade='S';
    echo  $grade;
  }
  else if($mark>80)
  {
    $grade='A';
    echo  $grade;
  }
  else if($mark>70)
  {
    $grade='B';
    echo  $grade;
  }
  else if($mark>60)
  {
    $grade='C';
    echo  $grade;
  }
  else if($mark>50)
  {
    $grade='D';
    echo  $grade;
  }
  else if($mark>40)
  {
    $grade='E';
    echo  $grade;
  }
  else if($mark<40)
  {
    $grade='F';
    
    echo  $grade;
  }
}
function status($mark)
{
  $status='Passed';
  if($mark<40)
  {
    $status='Failed';
  }
  echo $status;
}
$obj->db_select();
$res=$obj->db_execute();
while($row=mysqli_fetch_array($res))
{

 ?>
 
  <tr> 
    <td colspan="6">Student Name : <?php echo $row[0]; echo " ";echo $row[1]; ?><br>
    
 Year : <?php
echo $row[3];
?></td>
<tr></tr>

<td> 1</td>
    <td>Microcontroller</td>
    <td><?php
echo $row[3];
?></td>
    <td><?php
echo $row[4];
?></td>
    <td><?php echo gradeCheck($row[4])?></td>
    <td><?php echo status($row[4])?></td>
  </tr>   
  <tr> 
    <td>2</td>
    <td>Smart Device Programming</td>
    <td><?php
echo $row[3];
?></td>
    <td><?php
echo $row[5];
?></td>
    <td><?php echo gradeCheck($row[5])?></td>
    <td><?php echo status($row[5])?></td>
  </tr>  
  <tr> 
    <td>3</td>
    <td>Software Testing</td>
    <td><?php
echo $row[3];
?></td>
    <td><?php
echo $row[6];
?></td>
    <td><?php echo gradeCheck($row[6])?></td>
    <td><?php echo status($row[6])?></td>
  </tr>    
  <tr> 
    <td>4</td>
    <td>Project & Seminar</td>
    <td><?php
echo $row[3];
?></td>
    <td><?php
echo $row[7];
?></td>
    <td><?php echo gradeCheck($row[7])?></td>
    <td><?php echo status($row[7])?></td>
  </tr>   
  <tr> 
    <td>5</td>
    <td>Computer Networks</td>
    <td><?php
echo $row[3];
?></td>
    <td><?php
echo $row[8];
?></td>
    <td><?php echo gradeCheck($row[8])?></td>
    <td><?php echo status($row[8])?></td>
  </tr>               
  <?php
}

?>

