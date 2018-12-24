#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_1 = 29;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_4[98];                       // Tag.BODY
    char entity_5[73];                       // Tag.BODY
    entity_2 = 72;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    if(entity_0 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 2;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_0] = 'g';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_0;                    // Tag.POINTER_DEC
    entity_5[entity_1] = 'q';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_3 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER