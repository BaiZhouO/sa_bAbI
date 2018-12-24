#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_9 = 22;                                       // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    char entity_8[52];                                   // Tag.BODY
    if (entity_0 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 82;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 51; entity_6 < entity_0; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_6] = 'm';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_6;                                // Tag.POINTER_DEC
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_7[4];                                    // Tag.BODY
    char entity_5[61];                                   // Tag.BODY
    entity_2 = 89;                                       // Tag.BODY
    char *entity_4 = (char *)(entity_3 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 83;                                       // Tag.BODY
    entity_7[entity_2] = 't';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_1] = 'J';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER