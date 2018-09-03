# Perdix - 2018
Perdix es un robot de batalla o Battlebot desarrollado en el transcurso del Taller de Proyecto EI2001-31 de la Facultad de Ciencias Fisicas y Matematicas de la Universidad de Chile. El proyecto consiste en la construccion desde cero de un Battlebot, desde su diseño hasta su electronica. Sin más veamos cómo se realizó y cómo fue su desarrollo. 


![perdix](/multimedia/VISTA_1_FINAL.jpg)



## Integrantes
- Joaquín Flores - FCFM
- Gonzalo Hernández - FCFM

## Descripción del proyecto

### Estrategia utilizada
#### Ofensiva
El arma de Perdix es una sierra diamantada, de ahi el nombre [Perdix](https://es.wikipedia.org/wiki/P%C3%A9rdix_(mitolog%C3%ADa)), la cual gira gracias a un motor DC de 9V. Notaran que la base está inclinada donde esta la sierra esto no es un error, si bien la coraza no esta impresa aun, si estan sus planos (estos pueden revisarse en el mismo proyecto). La coraza esta diseñada para dejar salir la sierra y aprovechar la pendiente con tal que cuando Perdix embista a otro robot, este ultimo se levante y caiga sobre la sierra. 

#### Defensiva
Estan diseñados planos para la coraza y los lados laterales de Perdix, aunque nosotros diriamos que son las ruedas su principal virtud. Cada rueda posee al igual que la sierra un motor DC de 9V, las cuales le dan gran velocidad y maniobrabilidad para escapar de sus enemigos. 

### Diagrama funcional
![diagrama](/multimedia/DIAGRAMA_GEN.png)

### *BONUS*: Paso a Paso
Nuestro equipo partio primero por buscar ideas, estas pueden ser de otros battlebots o de nuestra propia imaginación. Despues de tener distintas y variadas ideas, se toman decisiones y se van descartando diseños en base a su viabilidad y desempeño. Al final de esta etapa deberian quedarnos unos 3 o 4 battebots posibles, para estos lo mejor es realizar una matriz de decisión para observar de una forma menos arbitraria cual sera el diseño con el que nos quedaremos. Habiendo determinado el battlebot, ahora hay que poner las manos en la masa, con carton y palos de brochetas nos hacemos una idea de los espacios que ocupara el robot y de su forma.

Una vez tenemos las ideas de tamaño y dimensión, empezamos a diseñar las piezas para los planos en SolidEdge. En esta etapa surgen muchas nuevas problematicas, pues aspectos como el funcionamiento de la sierra todavia estaban un poco en duda, sin embargo pudimos sobrellevarlo. Ahora con los planos listos hay que ir a comprar materiales, esto se da muchas veces en el transcurso del proyecto pues no siempre todo funciona a la primera. Imprimos las piezas, las ensamblamos (algunas las pegamos), realizamos el codigo de arduino y el apk, y enchufamos la electronica. Muchas veces se tuvo que reinventar el codigo para que funcionara correctamente y voila tenemos a Perdix. 

Para armar a Perdix hay que imprimir los planos con cortadora laser en MDF de 3 mm y ensamblar las partes. Posteriormente atornillar los motores, el pivote, la sierra y la base para los componentes. Instalar los componentes electronicos y cableados correspondientes, cargar el codigo de arduino y descargar el apk. Finalmente pegar la coraza y sus laterales. PERDIX al ataque. 

## Licencia
<a rel="license" href="http://creativecommons.org/licenses/by-nc/4.0/"><img alt="Licencia Creative Commons" style="border-width:0" src="https://i.creativecommons.org/l/by-nc/4.0/88x31.png" /></a><br />Esta obra está bajo una <a rel="license" href="http://creativecommons.org/licenses/by-nc/4.0/">Licencia Creative Commons Atribución-NoComercial 4.0 Internacional</a>.
