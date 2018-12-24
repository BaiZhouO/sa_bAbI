#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_3[71];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_6 = 49;                           // Tag.BODY
    entity_1 = 97;                           // Tag.BODY
    if(entity_6 < entity_1){                 // Tag.BODY
    entity_6 = 84;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 71;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_6] = 's';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_6;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    char entity_4[20];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_5[23];                       // Tag.BODY
    char *entity_8 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 78;                           // Tag.BODY
    entity_4[entity_7] = 'v';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 47;                           // Tag.BODY
    entity_5[entity_0] = 'K';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER