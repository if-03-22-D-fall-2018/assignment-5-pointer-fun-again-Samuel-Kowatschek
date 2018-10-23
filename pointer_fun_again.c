/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 05
 * Title:			pointe fun again
 * Author:			Kowatschek Samuel
 * ----------------------------------------------------------
 * Description:
 *More fun with pointer
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>

#define string_len 64

struct PlayStruct{
  int int_value;
  double double_value;
  char a_string[string_len];
};

void print_struct(struct PlayStruct ps, struct PlayStruct *pps);

void change_struct(struct PlayStruct ps, struct PlayStruct *pps);

int main(int argc, char const *argv[]) {
  struct PlayStruct play_struct={12,18.3,"Hello!"};
  struct PlayStruct *play_struct_pointer=&play_struct;
  print_struct(play_struct, play_struct_pointer);
  change_struct(play_struct, play_struct_pointer);
  print_struct(play_struct, play_struct_pointer);
  /*Basically, just the value which the pointer points at got changed, so both changes,
  *but play_struct changes to the values that only play_struct_pointer should have, because
  *how i already said, it points at the adress of the value.
  */

  return 0;
}

void print_struct(struct PlayStruct ps, struct PlayStruct *pps){
  printf("Values of struct ps: %d, %.3lf, %s\n",ps.int_value,ps.double_value, ps.a_string);
  printf("Values of struct pps: %d, %.3lf, %s\n",pps->int_value, pps->double_value, pps->a_string);
}

void change_struct(struct PlayStruct ps, struct PlayStruct *pps){
  ps.int_value=14;
  ps.double_value=10.2;
  strcpy(ps.a_string, "change1");
  pps->int_value=20;
  pps->double_value=1.3;
  strcpy(pps->a_string, "change2");
}
