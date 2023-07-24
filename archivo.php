<?php

header("Content-type: application/json; charset=utf-8");

try{

      $base=new PDO("mysql:host=localhost; dbname=database" , "root", "");
      $base->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

      $sql="SELECT * FROM table_shared_cards WHERE QUESTION_QUESTION_ONLINE LIKE CONCAT( '%', :QUESTION_QUESTION_ONLINE, '%')";


      $resultado=$base->prepare($sql);

      $content = json_decode(file_get_contents('php://input'), true);
      
      
      

      //$QUESTION_QUESTION_ONLINE=htmlentities(addslashes($content['QUESTION_QUESTION_ONLINE']));
      $QUESTION_QUESTION_ONLINE=$content['QUESTION_QUESTION_ONLINE'];
      

      $resultado->bindValue(":QUESTION_QUESTION_ONLINE", $QUESTION_QUESTION_ONLINE);

      $resultado->execute();


      $res=array();
      while( $row = $resultado -> fetch(PDO::FETCH_ASSOC) ) {
          $res[]=$row;
      }
      //header('Content-Type: application/json');
      echo json_encode( array("datos"=>$res) );
      exit();   




}catch(Exception $e){
      echo json_encode(array("error"=>$e->getMessage()));
      $numVar12345 = "prueba2array.txt";
      $fileVar123 = fopen($numVar12345, "w");
      fwrite($fileVar123, print_r(array("error"=>$e->getMessage()), true));
      fclose($fileVar123);
      exit();
}

?>
