#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_2[24];                       // Tag.BODY
    entity_6 = 41;                           // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    if(entity_1 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 81;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_1] = 'D';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_1;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    entity_9 = 45;                           // Tag.BODY
    char *entity_4 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[71];                       // Tag.BODY
    entity_5[entity_9] = '2';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER