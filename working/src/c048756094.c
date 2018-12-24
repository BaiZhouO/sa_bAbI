#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_9[91];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_4 = 4;                            // Tag.BODY
    char entity_3[72];                       // Tag.BODY
    entity_0 = 34;                           // Tag.BODY
    if(entity_5 < entity_0){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 74;                           // Tag.BODY
    entity_9[entity_4] = 'z';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    entity_3[entity_5] = '4';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_5;                    // Tag.POINTER_DEC
    char entity_8[47];                       // Tag.BODY
    char *entity_6 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_2;                            // Tag.BODY
    entity_2 = 6;                            // Tag.BODY
    entity_8[entity_2] = 'g';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER