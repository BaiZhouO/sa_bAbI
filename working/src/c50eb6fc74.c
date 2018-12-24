#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_1 = 96;                                       // Tag.BODY
    char entity_6[76];                                   // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    if (entity_9 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 50;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 50; entity_7 < entity_9; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_7] = 'b';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_5 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER