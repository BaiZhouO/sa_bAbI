#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_2[34];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_1 = 89;                           // Tag.BODY
    entity_5 = 16;                           // Tag.BODY
    char entity_6[92];                       // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    if(entity_9 < entity_1){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 96;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_5] = 'J';                // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_9] = 'F';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER