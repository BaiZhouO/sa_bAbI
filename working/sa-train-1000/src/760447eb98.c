#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_7[2];                        // Tag.BODY
    entity_5 = 47;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 18;                           // Tag.BODY
    entity_1 = 66;                           // Tag.BODY
    char entity_9[6];                        // Tag.BODY
    if(entity_5 < entity_1){                 // Tag.BODY
    entity_5 = 14;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 71;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_5] = 'g';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_5;                    // Tag.POINTER_DEC
    entity_7[entity_2] = 'h';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_4 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER