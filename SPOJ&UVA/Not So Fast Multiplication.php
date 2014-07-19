<?php
       $inputy = fopen('php://stdin', "r");
       
       fscanf($inputy, "%d",$n);
       
       while ($n--) 
       {
                fscanf($inputy, "%s %s", $a,$b);
                printf("%s\n",bcmul($a, $b));
       }
?>
