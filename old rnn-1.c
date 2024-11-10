\\ simple recurrent neural network (RNN) code in c. assume a 8 bit   integers as the data type
\\ code implements a simple recurrent neural network (RNN) with 8 bit integers as the data type. 
\\ It uses a loop over 8 time steps to compute the hidden state and the output of the RNN. 
\\ The hidden state is computed by taking the input vector and multiplying it by a 8x8 weight matrix 
\\ and adding a bias vector. The output is computed in a similar manner, but using the hidden state 
\\ as the input vector and a different 8x8 weight matrix and bias vector.
--- 
; 1 byte
#include <stdio.h>

int main()
{
    int input[8]; // 8 bit data type
    int hidden[8]; // 8 bit hidden state
    int output[8]; // 8 bit output

    // Initialize weights
    int w_input[8][8];
    int w_hidden[8][8];
    int w_output[8][8];

    // Initialize bias
    int b_input[8];
    int b_hidden[8];
    int b_output[8];

    // Loop over the time steps
    for(int t=0; t<8; t++){
        // Compute the hidden state
        for(int i=0; i<8; i++){
            hidden[i] = 0;
            for(int j=0; j<8; j++){
                hidden[i] += input[j] * w_input[i][j];
            }
            hidden[i] += b_input[i];
        }

        // Compute the output
        for(int i=0; i<8; i++){
            output[i] = 0;
            for(int j=0; j<8; j++){
                output[i] += hidden[j] * w_hidden[i][j];
            }
            output[i] += b_hidden[i];
        }
    }

    return 0;
}


\\\\\\\\\\\\\\\\\\\\\\\\
; 1k buffer

#include <stdio.h>

int main()
{
    int input[1024]; // 1024 bit data type
    int hidden[1024]; // 1024 bit hidden state
    int output[1024]; // 1024 bit output

    // Initialize weights
    int w_input[1024][1024];
    int w_hidden[1024][1024];
    int w_output[1024][1024];

    // Initialize bias
    int b_input[1024];
    int b_hidden[1024];
    int b_output[1024];

    // Loop over the time steps
    for(int t=0; t<1024; t++){
        // Compute the hidden state
        for(int i=0; i<1024; i++){
            hidden[i] = 0;
            for(int j=0; j<1024; j++){
                hidden[i] += input[j] * w_input[i][j];
            }
            hidden[i] += b_input[i];
        }

        // Compute the output
        for(int i=0; i<1024; i++){
            output[i] = 0;
            for(int j=0; j<1024; j++){
                output[i] += hidden[j] * w_hidden[i][j];
            }
            output[i] += b_hidden[i];
        }
    }

    return 0;
}
\\\\\\\\\\\\\\\\\\\\\\\\
forth 83


: main  ( -- ) 
        create input 1024 8 allot
        create hidden 1024 8 allot
        create output 1024 8 allot

        create w_input 1024 1024 8 allot
        create w_hidden 1024 1024 8 allot
        create w_output 1024 1024 8 allot

        create b_input 1024 8 allot
        create b_hidden 1024 8 allot
        create b_output 1024 8 allot

        0 1024 begin
            0 1024 begin
                hidden i 8 * input i 8 * + b_input i 8 +
            repeat
            hidden i 8 * w_hidden i 1024 8 * + b_hidden i 8 +
        repeat
    ;
\\\\\\\\\\\\\\\\\\\\\
The allot keyword in Forth 83 is used to allocate a specified amount of memory for a given variable. 
It takes the size of the memory as an argument and allocates that much memory for 
the variable. For example, "create foo 1024 8 allot" would allocate 8 kb of memory for the variable "foo".
\\\\\\\\\\\\\\\\\\
\\ use more primitives
create input 1024 allot
create hidden 1024 allot
create output 1024 allot

create w_input 1024 1024 allot
create w_hidden 1024 1024 allot
create w_output 1024 1024 allot

create b_input 1024 allot
create b_hidden 1024 allot
create b_output 1024 allot

0 1024 begin
    0 1024 begin
        hidden i c@ input i c@ + b_input i c@ + b_input i c@ + + c!
    repeat
    hidden i c@ w_hidden i 1024 c@ + b_hidden i c@ + b_hidden i c@ + + c!
repeat
\\\\\\\\\\\\\\\\\\
create input 1024 allot - This creates an input data space of 1024 bytes and allocates it.
create hidden 1024 allot - This creates a hidden data space of 1024 bytes and allocates it.
create output 1024 allot - This creates an output data space of 1024 bytes and allocates it.
create w_input 1024 1024 allot - This creates a weight matrix for the input data space of 1024x1024 bytes and allocates it.
create w_hidden 1024 1024 allot - This creates a weight matrix for the hidden data space of 1024x1024 bytes and allocates it.
create w_output 1024 1024 allot - This creates a weight matrix for the output data space of 1024x1024 bytes and allocates it.
create b_input 1024 allot - This creates a bias vector for the input data space of 1024 bytes and allocates it.
create b_hidden 1024 allot - This creates a bias vector for the hidden data space of 1024 bytes and allocates it.
create b_output 1024 allot - This creates a bias vector for the output data space of 1024 bytes and allocates it.
0 1024 begin - This begins a loop over the time steps which will iterate 1024 times.
    0 1024 begin - This begins a loop over the hidden state which will iterate 1024 times.
        hidden i c@ input i c@ + b_input i c@ + b_input i c@ + + c! - This takes the current hidden state value, adds the current 
        input value, adds the current bias value, and stores the result in the current hidden state.
    repeat - This ends the loop over the hidden state.
    hidden i c@ w_hidden i 1024 c@ + b_hidden i c@ + b_hidden i c@ + + c! - This takes the current hidden state value, 
multiplies it by the current weight matrix value, adds the current bias value, and stores the result in the current output state.
repeat - This ends the loop over the time steps.
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

