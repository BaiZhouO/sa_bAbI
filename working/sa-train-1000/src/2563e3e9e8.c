#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    char entity_6[69];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_4 = 54;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    entity_3 = 0;                            // Tag.BODY
    char entity_1[37];                       // Tag.BODY
    if(entity_0 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 91;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_0] = 'e';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_6[entity_3] = 'L';                // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = &entity_0;                    // Tag.POINTER_DEC
    char entity_5[19];                       // Tag.BODY
    char *entity_2 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_8;                            // Tag.BODY
    entity_8 = 34;                           // Tag.BODY
    entity_5[entity_8] = 'b';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER