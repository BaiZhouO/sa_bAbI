#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    entity_2 = 39;                                       // Tag.BODY
    char entity_8[50];                                   // Tag.BODY
    if (entity_3 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 38;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 68; entity_6 < entity_3; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_6] = 'D';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_6;                                // Tag.POINTER_DEC
    int entity_0;                                        // Tag.BODY
    char *entity_7 = (char *)(entity_5 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[84];                                   // Tag.BODY
    entity_0 = 6;                                        // Tag.BODY
    entity_9[entity_0] = 'P';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER