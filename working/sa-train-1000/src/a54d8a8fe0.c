#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    entity_2 = 1;                            // Tag.BODY
    char entity_0[50];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    if(entity_4 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 14;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_4] = 'd';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_4;                    // Tag.POINTER_DEC
    char entity_8[95];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    char *entity_5 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 93;                           // Tag.BODY
    entity_8[entity_1] = 'K';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER