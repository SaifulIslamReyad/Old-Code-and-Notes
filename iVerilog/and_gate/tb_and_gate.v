`timescale 1ns/1ps
`include "and_gate.v"
module tb_and_gate;
    reg a;
    reg b;
    wire y;
    and_gate uut (
        .a(a),
        .b(b),
        .y(y)
    );
    initial begin
        $dumpfile("tb_and_gate.vcd");
        $dumpvars(0, tb_and_gate);
        a = 0;
        b = 0;
        #10 a = 0; b = 1;
        #10 a = 1; b = 0;
        #10 a = 1; b = 1;
        #10 $finish;
    end
    initial begin
        $monitor("At time %t: a = %b, b = %b, y = %b", $time, a, b, y);
    end
endmodule
