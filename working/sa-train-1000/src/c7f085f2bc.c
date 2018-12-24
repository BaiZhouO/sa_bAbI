#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 74;                                       // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    char entity_8[21];                                   // Tag.BODY
    if (entity_4 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 81;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 89; entity_7 < entity_4; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_7] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_2 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER