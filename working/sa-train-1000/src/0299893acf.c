#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_7[20];                       // Tag.BODY
    char entity_0[45];                       // Tag.BODY
    char entity_5[27];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 64;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_9 = 80;                           // Tag.BODY
    entity_1 = 78;                           // Tag.BODY
    entity_0[entity_6] = 'c';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8 = 20;                           // Tag.BODY
    if(entity_9 < entity_1){                 // Tag.BODY
    entity_9 = 92;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 10;                           // Tag.BODY
    entity_7[entity_8] = 'E';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    entity_5[entity_9] = 'h';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER