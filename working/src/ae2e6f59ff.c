#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    entity_1 = 66;                           // Tag.BODY
    char entity_4[7];                        // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 34;                           // Tag.BODY
    if(entity_7 < entity_1){                 // Tag.BODY
    entity_7 = 12;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 7;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_7] = '5';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER