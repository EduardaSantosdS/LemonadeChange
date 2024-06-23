# LemonadeChange
__Eduarda dos Santos da Silva__

O problema é sobre gerenciar uma barraca de limonada onde cada limonada custa $5, e os clientes pagam com notas de $5, $10 ou $20. Precisamos garantir que podemos fornecer o troco correto a cada cliente.

As situações testadas foram as seguintes: 
__Entrada 1:__ 5, 5, 5, 10, 20
__Saída 2:__ Verdadeiro
Dos primeiros 3 clientes, coletamos três notas de US$ 5 em ordem.
Do quarto cliente, cobramos uma nota de US$ 10 e devolvemos US$ 5.
Do quinto cliente, damos uma nota de 10 dólares e uma nota de 5 dólares.
Como todos os clientes obtiveram a alteração correta, produzimos verdadeiro.

__Entrada 2:__ 5, 5, 10, 10, 20
__Saída 2:__ Falso
Dos dois primeiros clientes do pedido, recebemos duas notas de US$ 5.
Para os próximos dois clientes do pedido, cobramos uma nota de US$ 10 e devolvemos uma nota de US$ 5.
Para o último cliente, não podemos devolver o troco de $ 15 porque só temos duas notas de $ 10.
Como nem todos os clientes receberam o troco correto, a resposta é falsa.

__Entrada 3:__ 5, 20, 10, 10, 20
__Saida 3:__ Falso
No primeiro cliente do pedido, recebemos uma nota de 5.
No segundo cliente do pedido, recebemos uma nota de 20, mas não podemos devolver o troco pois temos apenas uma nota de 5, e ser necessário tres notas de 5, ou uma de 10 e outra de 5.
Nos próximos 3 clientes do pedido, recebemos as notas de 10 de cada um, mas só seria possível dar o troco para apenas um deles, pois temos apenas uma nota de 5.
Como nem todos os clientes receberam o troco correto, a resposta é falsa.

A principio, o código funciona por completo. Não foi possível fazer a verificação no Dr.Memory, pois o mesmo deu problemas que não consegui resolver de forma alguma. 
O erro aponta para o meu ambiente de desenvolvimento, mas nada é capaz de solucionar o mesmo. O erro em questão, é o seguinte:
"Error #1: UNINITIALIZED READ: reading register eax
# 0 KERNELBASE.dll!FindNextFileW 
# 1 KERNELBASE.dll!FindNextFileA 
# 2 .text                              [../../../src/gcc-6.3.0/libgcc/config/i386/cygwin.S:184]
# 3 __mingw_glob                       [../../../src/gcc-6.3.0/libgcc/config/i386/cygwin.S:184]
# 4 _setargv                           [d:/Usuários/Eduarda/Área de Trabalho/lemonada.c:48]
# 5 .text       
# 6 mainCRTStartup
# 7 ntdll.dll!__RtlUserThreadStart
Note: @0:00:00.840 in thread 5312
Note: instruction: cmp    %eax $0x0000001a"

Dito isso, não sei dizer se acontece algo além do mostrado no código, a compilação está correta e sendo executada de maneira eficiente.
