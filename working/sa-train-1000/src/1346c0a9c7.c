#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_5[48];                                   // Tag.BODY
    entity_7 = 67;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    if (entity_1 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 69;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 41; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_9] = 'x';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_8 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER