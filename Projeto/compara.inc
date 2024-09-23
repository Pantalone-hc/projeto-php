<?php 

    $texto = "";

    if(ISSET($_COOKIE["idioma"]))
    {
        if($_COOKIE["idioma"] == "uk")
        {
            $texto = "OUR PLANT <br> The XXX INDÚSTRIA DE MÁQUINAS LTDA, was founded on 1970, and became the most important and traditional supplyer of BAGGING MACHINES in Brazil.";
        }
        else if($_COOKIE["idioma"] == "es")
        {
            $texto = "EMPRESA <br> La XXX INDÚSTRIA DE MÁQUINAS LTDA, fue fundada en 1970, y sé a convertido en la más importante y tradicional fabrica de MÁQUINAS ENSACADORAS em Brasil.";
        }
        else
        {
            $texto = "EMPRESA <br> A XXX INDÚSTRIA DE MÁQUINAS LTDA, foi fundada em 1970, e tornou-se o mais importante e tradicional fabricante de máquinas ensacadeiras no Brasil.";
        }
    }
    else 
    {
        $texto = "EMPRESA <br> A XXX INDÚSTRIA DE MÁQUINAS LTDA, foi fundada em 1970, e tornou-se o mais importante e tradicional fabricante de máquinas ensacadeiras no Brasil.";
    }

    $arquivo = fopen("texto.txt", "w");

    if($arquivo) {
        fwrite($arquivo, $texto);

        fclose($arquivo);
    }

?>