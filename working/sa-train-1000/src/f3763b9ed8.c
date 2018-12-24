#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_6 = 18;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    char entity_5[75];                                   // Tag.BODY
    if (entity_1 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 49;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 58; entity_4 < entity_1; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_4] = '8';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_8 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER