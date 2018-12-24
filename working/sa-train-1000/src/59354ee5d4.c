#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    char entity_6[14];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    entity_5 = 67;                                       // Tag.BODY
    if (entity_3 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 14;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 92; entity_8 < entity_3; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_8] = '3';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_8;                                // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_9 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER