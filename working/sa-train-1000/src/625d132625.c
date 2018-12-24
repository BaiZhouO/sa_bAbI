#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    entity_2 = 36;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_8[37];                       // Tag.BODY
    entity_0 = 90;                           // Tag.BODY
    if(entity_0 < entity_2){                 // Tag.BODY
    entity_0 = 77;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 33;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_0] = 'd';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_0;                    // Tag.POINTER_DEC
    char entity_3[41];                       // Tag.BODY
    char *entity_6 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_1;                            // Tag.BODY
    entity_1 = 8;                            // Tag.BODY
    entity_3[entity_1] = 'v';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER