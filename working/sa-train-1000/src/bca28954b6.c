#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_2[61];                       // Tag.BODY
    entity_6 = 3;                            // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    if(entity_0 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 26;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_0] = '5';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_0;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    entity_1 = 17;                           // Tag.BODY
    char *entity_7 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_5;                            // Tag.BODY
    char entity_3[69];                       // Tag.BODY
    char entity_4[55];                       // Tag.BODY
    entity_3[entity_1] = 'n';                // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = 49;                           // Tag.BODY
    entity_4[entity_5] = 'P';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER