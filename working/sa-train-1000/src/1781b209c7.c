#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    char entity_0[77];                       // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_1[9];                        // Tag.BODY
    entity_5 = 2;                            // Tag.BODY
    entity_4 = 69;                           // Tag.BODY
    if(entity_6 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 35;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_6] = 'p';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_6;                    // Tag.POINTER_DEC
    int entity_2;                            // Tag.BODY
    entity_2 = 57;                           // Tag.BODY
    entity_0[entity_5] = 'O';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_9 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_7[39];                       // Tag.BODY
    entity_7[entity_2] = 'K';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER