#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    char entity_6[40];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 92;                                       // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    if (entity_5 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 80;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 66; entity_3 < entity_5; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_3] = 'S';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_3;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_9 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER