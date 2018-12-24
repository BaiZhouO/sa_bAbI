#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_1 = 11;                           // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    char entity_7[78];                       // Tag.BODY
    if(entity_5 < entity_1){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 54;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_5] = 't';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_5;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    char entity_4[94];                       // Tag.BODY
    char *entity_0 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 10;                           // Tag.BODY
    entity_4[entity_6] = 'X';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER