#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    char entity_6[57];                       // Tag.BODY
    char entity_3[11];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 86;                           // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    entity_4 = 36;                           // Tag.BODY
    if(entity_8 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 36;                           // Tag.BODY
    entity_3[entity_2] = 'n';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    entity_6[entity_8] = '1';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_8;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    char entity_5[76];                       // Tag.BODY
    char *entity_7 = (char *)(entity_9 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0 = 43;                           // Tag.BODY
    entity_5[entity_0] = '3';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER