#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_2[68];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_9[10];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_3 = 46;                           // Tag.BODY
    entity_8 = 46;                           // Tag.BODY
    entity_4 = 86;                           // Tag.BODY
    if(entity_3 < entity_4){                 // Tag.BODY
    entity_3 = 30;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 97;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_3] = 'F';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_3;                    // Tag.POINTER_DEC
    char entity_0[66];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    char *entity_1 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 53;                           // Tag.BODY
    entity_2[entity_8] = 'Z';                // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_6] = 'h';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER