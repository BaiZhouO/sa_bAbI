#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_8[11];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_4 = 98;                           // Tag.BODY
    entity_7 = 25;                           // Tag.BODY
    if(entity_7 < entity_4){                 // Tag.BODY
    entity_7 = 78;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 86;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_7] = 'A';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_7;                    // Tag.POINTER_DEC
    char entity_2[2];                        // Tag.BODY
    int entity_1;                            // Tag.BODY
    char *entity_5 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 20;                           // Tag.BODY
    entity_2[entity_1] = '7';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER