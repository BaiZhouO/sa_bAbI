#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_3[15];                                   // Tag.BODY
    entity_4 = 87;                                       // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    if (entity_9 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 85;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 36; entity_2 < entity_9; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_2] = '7';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER