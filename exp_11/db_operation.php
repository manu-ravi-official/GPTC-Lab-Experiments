<?php
class db_operation
{
    var $conn,$sql,$res,$fname,$lname,$dept,$batch,$sub1,$sub2,$sub3,$sub4,$sub5;
    VAR $servername="localhost";
    var $username="root";
    var $password="";
    var $database="wplab";
    
    function db_connection()
    {
    $this->conn=mysqli_connect($this->servername,$this->username,$this->password,$this->database);
    return $this->conn;
    }
    function db_insert($fname,$lname,$dept,$batch,$sub1,$sub2,$sub3,$sub4,$sub5)
    {
        $this->fname=$fname;
        $this->lname=$lname;
        $this->dept=$dept;
        $this->batch=$batch;
        $this->sub1=$sub1;
        $this->sub2=$sub2;
        $this->sub3=$sub3;
        $this->sub4=$sub4;
        $this->sub5=$sub5;
        
        $this->sql="INSERT INTO `student_table`(`fname`, `lname`, `dept`, `batch`, `sub1`, `sub2`, `sub3`, `sub4`, `sub5`)VALUES('$this->fname','$this->lname','$this->dept' ,'$this->batch','$this->sub1'   ,   '$this->sub2'    ,   '$this->sub3','$this->sub4' ,   '$this->sub5 '   )";
       //echo  $this->sql;
       header('Location: display.php');

    }
 
    function db_select()
    {
        $this->sql="SELECT * FROM student_table ";
    }
    
    function db_execute()
    {
    $this->res=mysqli_query($this->conn,$this->sql);
    return $this->res;
    }    
}
?>
