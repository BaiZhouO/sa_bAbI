#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    char entity_8[55];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_4[58];                       // Tag.BODY
    entity_5 = 12;                           // Tag.BODY
    entity_3 = 38;                           // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    entity_8[entity_5] = 'n';                // Tag.BUFWRITE_TAUT_SAFE
    if(entity_1 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 7;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_1] = 'm';                // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER