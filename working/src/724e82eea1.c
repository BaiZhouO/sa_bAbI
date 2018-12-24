#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_3[3];                        // Tag.BODY
    entity_4 = 10;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 69;                           // Tag.BODY
    if(entity_0 < entity_4){                 // Tag.BODY
    entity_0 = 66;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 62;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_0] = 's';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_0;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    entity_9 = 16;                           // Tag.BODY
    char *entity_1 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[51];                       // Tag.BODY
    entity_5[entity_9] = 'w';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER