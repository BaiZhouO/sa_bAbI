#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_1 = 63;                           // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    char entity_7[28];                       // Tag.BODY
    if(entity_4 < entity_1){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 86;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_4] = 'x';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_4;                    // Tag.POINTER_DEC
    char entity_9[99];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_5 = 73;                           // Tag.BODY
    char *entity_6 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3 = 69;                           // Tag.BODY
    entity_9[entity_3] = 'I';                // Tag.BUFWRITE_TAUT_SAFE
    char entity_8[45];                       // Tag.BODY
    entity_8[entity_5] = 'd';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER