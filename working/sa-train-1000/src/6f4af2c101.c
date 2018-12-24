#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    char entity_4[32];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_9 = 95;                           // Tag.BODY
    char entity_5[66];                       // Tag.BODY
    entity_1 = 41;                           // Tag.BODY
    if(entity_6 < entity_1){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5[entity_9] = 'e';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 41;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_6] = 'z';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_6;                    // Tag.POINTER_DEC
    char entity_7[25];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    char *entity_0 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3 = 53;                           // Tag.BODY
    entity_7[entity_3] = '1';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER