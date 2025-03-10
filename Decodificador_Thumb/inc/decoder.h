
#ifndef DECODER_H_
#define DECODER_H_

int opcode(int instruction, int num);
void instruction_decoder(int instruction, int opcode, int num, char *buffer);
void read_file();
void valid_hex_number();

#endif //DECODER_H_
