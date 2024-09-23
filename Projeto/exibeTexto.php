<?php 
    $arquivo = fopen("texto.txt", "r");

    $texto = $arquivo ? fread($arquivo, 5000) : "";
?>

<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title> Home Idiomas </title>

    <link rel="stylesheet" href="./css/estilo.css">

    <?php include("compara.inc")
    ?>
</head>
<body>
    <div class="titulo-container">
        <div class="titulo">
            <h3> Bem vindo ao Site Web Design em Foco </h3>
        </div>
    </div>
    <div class="conteudo-container lingua-texto">
        <div class="conteudo">
            <p> <?php echo($texto) ?> </p>
            <a href="/Projeto/reiniciaIdioma.php"> Selecionar outro idioma </a>
        </div>
    </div>
</body>
</html>