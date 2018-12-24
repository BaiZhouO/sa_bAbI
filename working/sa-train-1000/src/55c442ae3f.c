#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_1[35];                       // Tag.BODY
    char entity_6[49];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_0 = 74;                           // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    char entity_9[9];                        // Tag.BODY
    entity_7 = 5;                            // Tag.BODY
    entity_6[entity_0] = 'H';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8 = 61;                           // Tag.BODY
    if(entity_3 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 46;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_3] = '0';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_3;                    // Tag.POINTER_DEC
    entity_1[entity_7] = 'X';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_4 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER