<?php 
    setcookie("idioma", $_GET["idioma"], time() + 259200);
    header("Location: /Projeto/exibeTexto.php");
?>