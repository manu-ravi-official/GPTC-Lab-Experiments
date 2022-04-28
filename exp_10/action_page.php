<?php 
if (isset($_POST["submit"])) {
    $prev = $_POST["previous"];
 $pres = $_POST["present"];
 $unit=$pres-$prev;
if($unit<100)
{
    $amount=$unit*3;

}
else if($unit>100 && $unit<200)
{
    $amount=$unit*4;
}
else if($unit>200 && $unit<300)
{
    $amount=$unit*5;
}
else if($unit>300)
{
    $amount=$unit*6;
}
echo "The Current Bill is: $amount<br>";
}
 ?>


