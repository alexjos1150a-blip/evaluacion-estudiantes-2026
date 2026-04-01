<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Sistema de Evaluación Personal</title>

<style>

body{
font-family: Arial;
text-align:center;
background: linear-gradient(to right,#e0f2fe,#f8fafc);
margin-top:100px;
}

button{

font-size:22px;
padding:15px 35px;
margin:20px;
cursor:pointer;
border-radius:10px;
border:none;
transition:0.3s;

}

#si{
background:#16a34a;
color:white;
}

#no{
background:#dc2626;
color:white;
}

#resultado{

margin-top:40px;
font-size:30px;
font-weight:bold;

}

#barra{

width:0%;
height:25px;
background:#2563eb;
margin:auto;
border-radius:10px;

}

#contenedor{

width:60%;
height:25px;
background:#cbd5e1;
margin:auto;
border-radius:10px;

}

</style>

</head>

<body>

<h1>Sistema de Evaluación Personal</h1>

<h2>¿Eres gay?</h2>

<button onclick="analizar()">Sí</button>

<button onclick="analizar()">No</button>

<p id="estado"></p>

<div id="contenedor">

<div id="barra"></div>

</div>

<h2 id="resultado"></h2>

<script>

function analizar(){

document.getElementById("estado").innerText="Analizando respuesta...";

let progreso=0;

let barra=document.getElementById("barra");

let intervalo=setInterval(function(){

progreso+=10;

barra.style.width=progreso+"%";

if(progreso>=100){

clearInterval(intervalo);

document.getElementById("estado").innerText="Resultado obtenido:";

document.getElementById("resultado").innerText="Lo sabía 😎 eres gay!!";

}

},300);

}

</script>

</body>
</html>