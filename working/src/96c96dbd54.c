#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_8[16];                       // Tag.BODY
    char entity_2[3];                        // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_9 = 27;                           // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    entity_6 = 84;                           // Tag.BODY
    if(entity_1 < entity_9){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 38;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_1] = 'x';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_1;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    char *entity_4 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0 = 29;                           // Tag.BODY
    char entity_3[4];                        // Tag.BODY
    entity_3[entity_0] = 'i';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_6] = 'Z';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER