#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_8 = 31;                           // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    char entity_0[35];                       // Tag.BODY
    if(entity_7 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 66;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_7] = 'p';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_7;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    char *entity_2 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_6[3];                        // Tag.BODY
    char entity_1[15];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 77;                           // Tag.BODY
    entity_3 = 67;                           // Tag.BODY
    entity_1[entity_3] = 'P';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_4] = 'a';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER