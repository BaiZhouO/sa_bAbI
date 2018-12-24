#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_0[31];                       // Tag.BODY
    entity_7 = 95;                           // Tag.BODY
    char entity_2[79];                       // Tag.BODY
    entity_5 = 96;                           // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    if(entity_4 < entity_5){                 // Tag.BODY
    entity_0[entity_7] = 'X';                // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                 // Tag.BODY
    entity_4 = 75;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_4] = '1';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_4;                    // Tag.POINTER_DEC
    char entity_9[56];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    char *entity_6 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 65;                           // Tag.BODY
    entity_9[entity_1] = '1';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER