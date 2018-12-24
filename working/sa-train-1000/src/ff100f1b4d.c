#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    char entity_1[12];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_3 = 83;                           // Tag.BODY
    char entity_9[86];                       // Tag.BODY
    entity_6 = 13;                           // Tag.BODY
    entity_7 = 44;                           // Tag.BODY
    if(entity_3 < entity_7){                 // Tag.BODY
    entity_3 = 97;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 84;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_3] = 'D';                // Tag.BUFWRITE_COND_SAFE
    entity_1[entity_6] = 'b';                // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER