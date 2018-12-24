#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_2 = 52;                           // Tag.BODY
    char entity_3[69];                       // Tag.BODY
    entity_0 = 81;                           // Tag.BODY
    if(entity_0 < entity_2){                 // Tag.BODY
    entity_0 = 51;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 94;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_0] = 'i';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_0;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    char *entity_9 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_7;                            // Tag.BODY
    entity_4 = 48;                           // Tag.BODY
    char entity_6[15];                       // Tag.BODY
    char entity_8[95];                       // Tag.BODY
    entity_6[entity_4] = 'p';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 53;                           // Tag.BODY
    entity_8[entity_7] = 'd';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER