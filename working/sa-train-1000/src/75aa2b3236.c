#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 12;                           // Tag.BODY
    char entity_8[6];                        // Tag.BODY
    entity_9 = 36;                           // Tag.BODY
    if(entity_5 < entity_9){                 // Tag.BODY
    entity_5 = 54;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 4;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_5] = 'd';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_5;                    // Tag.POINTER_DEC
    char entity_2[55];                       // Tag.BODY
    char *entity_4 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_6;                            // Tag.BODY
    entity_6 = 85;                           // Tag.BODY
    entity_2[entity_6] = 'u';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER