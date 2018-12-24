#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    char entity_9[90];                       // Tag.BODY
    entity_7 = 39;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_4[35];                       // Tag.BODY
    entity_8 = 72;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    if(entity_0 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 95;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_0] = 'O';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_4[entity_7] = 'M';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = &entity_0;                    // Tag.POINTER_DEC
    int entity_5;                            // Tag.BODY
    char *entity_1 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_6[59];                       // Tag.BODY
    entity_5 = 94;                           // Tag.BODY
    entity_6[entity_5] = 'l';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER