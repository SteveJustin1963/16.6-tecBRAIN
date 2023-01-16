\\ simple recurrent neural network (RNN) code in c. assume a 8 bit   integers as the data type
\\ code implements a simple recurrent neural network (RNN) with 8 bit integers as the data type. 
\\ It uses a loop over 8 time steps to compute the hidden state and the output of the RNN. 
\\ The hidden state is computed by taking the input vector and multiplying it by a 8x8 weight matrix 
\\ and adding a bias vector. The output is computed in a similar manner, but using the hidden state 
\\ as the input vector and a different 8x8 weight matrix and bias vector.
--- 

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
