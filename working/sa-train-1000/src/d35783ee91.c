#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_6[7];                        // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_2 = 6;                            // Tag.BODY
    entity_4 = 82;                           // Tag.BODY
    if (entity_7 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 50;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_7){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_4] = 'R';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_4;                    // Tag.POINTER_DEC
    int entity_5;                            // Tag.BODY
    entity_5 = 98;                           // Tag.BODY
    char entity_0[14];                       // Tag.BODY
    char *entity_1 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0[entity_5] = 'O';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER