#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_9 = 33;                                       // Tag.BODY
    char entity_2[16];                                   // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    if (entity_7 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 18;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 84; entity_8 < entity_7; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_8] = 'B';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_8;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_4 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_1[9];                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 74;                                       // Tag.BODY
    entity_1[entity_0] = 'M';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER