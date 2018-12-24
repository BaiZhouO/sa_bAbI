#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_3[7];                        // Tag.BODY
    entity_2 = 12;                           // Tag.BODY
    entity_4 = 24;                           // Tag.BODY
    char entity_0[17];                       // Tag.BODY
    entity_3[entity_4] = 'l';                // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_9 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 53;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_9] = 'L';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_9;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    entity_8 = 21;                           // Tag.BODY
    char *entity_6 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[41];                       // Tag.BODY
    entity_5[entity_8] = 's';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER