#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_4[19];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_9 = 98;                           // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    if(entity_8 < entity_9){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 96;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_8] = 'I';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_8;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_7[59];                       // Tag.BODY
    char *entity_2 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[91];                       // Tag.BODY
    entity_1 = 56;                           // Tag.BODY
    entity_0 = 96;                           // Tag.BODY
    entity_7[entity_1] = 's';                // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_0] = 'E';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER