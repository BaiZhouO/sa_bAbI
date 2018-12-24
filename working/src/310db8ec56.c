#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    char entity_0[57];                                   // Tag.BODY
    entity_5 = 57;                                       // Tag.BODY
    if (entity_3 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 13;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 75; entity_7 < entity_3; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_7] = 'Q';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_9 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER