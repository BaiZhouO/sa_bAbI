#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_4[22];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 21;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 20;                           // Tag.BODY
    char entity_1[31];                       // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    if(entity_5 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4[entity_9] = 'A';                // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = 6;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_5] = 'N';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER