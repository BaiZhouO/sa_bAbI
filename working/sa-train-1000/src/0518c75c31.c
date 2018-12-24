#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    char entity_5[34];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 2;                            // Tag.BODY
    if(entity_3 < entity_7){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 5;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_3] = 'g';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_3;                    // Tag.POINTER_DEC
    char entity_1[69];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    char *entity_6 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2 = 4;                            // Tag.BODY
    entity_1[entity_2] = '1';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER