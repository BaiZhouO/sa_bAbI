#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_0[96];                       // Tag.BODY
    char entity_1[39];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_2 = 79;                           // Tag.BODY
    char entity_6[71];                       // Tag.BODY
    entity_3 = 63;                           // Tag.BODY
    entity_7 = 34;                           // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    entity_6[entity_7] = 'B';                // Tag.BUFWRITE_TAUT_SAFE
    if(entity_8 < entity_2){                 // Tag.BODY
    entity_0[entity_3] = 'N';                // Tag.BUFWRITE_TAUT_SAFE
    } else {                                 // Tag.BODY
    entity_8 = 4;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_8] = '1';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER