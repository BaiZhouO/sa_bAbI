#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_4[59];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_9 = 2;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_0 = 77;                           // Tag.BODY
    entity_7 = 34;                           // Tag.BODY
    char entity_1[3];                        // Tag.BODY
    entity_1[entity_9] = 'Z';                // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 35;                           // Tag.BODY
    char entity_6[23];                       // Tag.BODY
    if(entity_7 < entity_0){                 // Tag.BODY
    entity_7 = 4;                            // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 97;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_7] = 'n';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6[entity_3] = 'T';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER